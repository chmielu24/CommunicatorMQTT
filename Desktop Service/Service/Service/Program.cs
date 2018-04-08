using System;
using System.Collections.Generic;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace Service {
	class Program {
		public static void Main () {
			TCPService sevice = new TCPService ();
			sevice.Listen ();
		}
	}
}
