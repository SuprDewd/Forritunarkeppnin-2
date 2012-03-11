using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Threading;

namespace Verkefni25
{
    class Program
    {
        static void Main(string[] args)
        {
            TcpListener listener = new TcpListener(IPAddress.Any, 1337);
            listener.Start();
            Random rand = new Random();
            string[] types = new string[] { "Hjarta", "Spaði", "Tígull", "Lauf" };

            while (true)
            {
                try
                {
                    TcpClient client = listener.AcceptTcpClient();
                    StreamWriter sw = new StreamWriter(client.GetStream());
                    while (true)
                    {
                        Thread.Sleep(1000);

                        string s = types[rand.Next(0, types.Length)] + " ";
                        int n = rand.Next(1, 14);
                        if (n == 1) s += "Ás";
                        else if (n <= 10) s += n;
                        else if (n == 11) s += "Gosi";
                        else if (n == 12) s += "Drottning";
                        else if (n == 13) s += "Kongur";
                        sw.WriteLine(s);
                        sw.Flush();
                    }
                }
                catch (Exception e)
                {
                    Console.WriteLine(e.Message);
                    Console.WriteLine(e.StackTrace);
                }
            }
        }
    }
}
