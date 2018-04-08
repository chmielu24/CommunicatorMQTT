using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace Service {
	class Program {
		static string m_ip = "127.0.0.1";
		static int m_port = 3200;
		static Socket socket = new Socket (AddressFamily.InterNetwork, SocketType.Stream, ProtocolType.Tcp);
		static IPAddress ipAdd = System.Net.IPAddress.Parse (m_ip);
		static IPEndPoint remoteEP = new IPEndPoint (ipAdd, m_port);


		static void Main (string[] args) {
			socket.Connect (remoteEP);

			while (true) {
				byte[] buffer = new byte[1024];
				int iRx = socket.Receive (buffer);
				char[] chars = new char[iRx];

				System.Text.Decoder d = System.Text.Encoding.UTF8.GetDecoder ();
				int charLen = d.GetChars (buffer, 0, iRx, chars, 0);
				System.String recv = new System.String (chars);

				Console.WriteLine (recv);
			}
		}

		~Program () {
			socket.Disconnect (false);
			socket.Close ();
		}
	}
}
