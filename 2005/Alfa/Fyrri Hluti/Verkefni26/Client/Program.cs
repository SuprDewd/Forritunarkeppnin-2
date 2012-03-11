using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Threading.Tasks;

namespace Client
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.Write("IP: ");
            IPAddress ip = IPAddress.Parse(Console.ReadLine());
            Console.Write("Slóð: ");
            string slod = Console.ReadLine();

            try
            {
                TcpClient client = new TcpClient();
                client.Connect(new IPEndPoint(ip, 1337));
                NetworkStream s = client.GetStream();

                StreamWriter sw = new StreamWriter(s);
                sw.WriteLine(slod);
                sw.Flush();

                StreamReader sr = new StreamReader(s);
                Console.WriteLine(sr.ReadLine());

                s.Close();
                client.Close();
            }
            catch (Exception e)
            {
                Console.WriteLine("Villa!");
                Console.WriteLine(e.Message);
                Console.WriteLine(e.StackTrace);
            }

            Console.ReadLine();
        }
    }
}
