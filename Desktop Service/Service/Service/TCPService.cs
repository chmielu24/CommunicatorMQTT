using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Service {
	class TCPService {
		TcpListener server = null;
		Int32 port = 13000;
		IPAddress localAddr = IPAddress.Parse ("127.0.0.1");

		List<ConnectedClient> allClients = new List<ConnectedClient> ();

		public TCPService () {
			server = new TcpListener (localAddr, port);
		}

		public void Listen () {
			try {
				// Start listening for client requests.
				server.Start ();

				while (true) {
					Console.Write ("Waiting for a connection... ");

					// Perform a blocking call to accept requests.
					// You could also user server.AcceptSocket() here.
					TcpClient acceptTcpClient = server.AcceptTcpClient ();

					ConnectedClient client = new ConnectedClient (acceptTcpClient);
					allClients.Add (client);
					Thread thread = new Thread (client.Run);
				}
			}
			catch (SocketException e) {
				Console.WriteLine ("SocketException: {0}", e);
			}
			finally {
				// Stop listening for new clients.
				server.Stop ();
			}
		}
	}
}
