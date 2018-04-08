using System;
using System.Collections.Generic;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Service {
	class ConnectedClient {
		TcpClient client;

		public ConnectedClient (TcpClient client) {
			this.client = client;
		}

		public void Run () {
			while (client.Connected) {

				byte[] bytes = new byte[256];
				string data = null;
				NetworkStream stream = client.GetStream ();

				int i = 0;
				while ((i = stream.Read (bytes, 0, bytes.Length)) != 0) {
					// Translate data bytes to a ASCII string.
					data = System.Text.Encoding.ASCII.GetString (bytes, 0, i);
					Console.WriteLine ("Received: {0}", data);

					byte[] msg = System.Text.Encoding.ASCII.GetBytes ("OK");

					stream.Write (msg, 0, msg.Length);
					Console.WriteLine ("Sent: {0}", data);
				}

				stream.Close ();
				Thread.Sleep (1000);
			}

			client.Close ();
		}
	}
}
