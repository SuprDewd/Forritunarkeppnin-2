using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net.Sockets;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Client
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("IP: ");
            string ip = Console.ReadLine();

            TcpClient client = new TcpClient();
            client.Connect(ip, 1337);

            StreamReader sr = new StreamReader(client.GetStream());
            while (true)
            {
                Console.WriteLine(sr.ReadLine());
            }
        }
    }
}
