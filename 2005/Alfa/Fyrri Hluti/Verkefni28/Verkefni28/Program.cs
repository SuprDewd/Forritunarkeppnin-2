using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading;
using System.Threading.Tasks;

namespace Verkefni28
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Forrit A í gangi");

            Process p = Process.Start(@"C:\Users\SuprDewd\Documents\Contests\Forritunarkeppnin\2005\Alfa\Fyrri Hluti\Verkefni28\ForritB\bin\Debug\ForritB.exe");
            Thread.Sleep(4000);
            p.Kill();
            Console.WriteLine("Forrit A búið");
            Console.ReadLine();
        }
    }
}
