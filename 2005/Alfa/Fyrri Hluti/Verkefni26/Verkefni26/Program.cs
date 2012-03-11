using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Net;
using System.Net.Sockets;
using System.IO;
using System.Threading;

namespace Verkefni26
{
    class Program
    {
        static void Main(string[] args)
        {
            TcpListener listener = new TcpListener(IPAddress.Any, 1337);
            listener.Start(20);

            while (true)
            {
                try
                {
                    TcpClient client = listener.AcceptTcpClient();
                    NetworkStream s = client.GetStream();
                    string folder = null;
                    StreamReader sr = new StreamReader(s);
                    folder = sr.ReadLine();

                    StreamWriter sw = new StreamWriter(s);
                    
                    if (Directory.Exists(folder))
                    {
                        sw.WriteLine("Slóð er til");
                    }
                    else
                    {
                        sw.WriteLine("Slóð er ekki til");
                    }

                    sw.Flush();
                    s.Close();
                    client.Close();
                }
                catch (Exception e)
                {
                    Console.WriteLine("Villa!");
                    Console.WriteLine(e.Message);
                    Console.WriteLine(e.StackTrace);
                }
            }
        }
    }
}
