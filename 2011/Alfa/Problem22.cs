using System;
using System.Text;
using System.Threading;

public class Program
{
    public static void Main()
    {
        Random rand = new Random();

        int[] nums = new int[5];
        object o = new object();

        new Thread(() =>
        {
            for (int i = 0; i < 5; i++) nums[i] = rand.Next(1, 7);
            bool any = false;

            for (int i = 0; i < 5; i++)
            {
                for (int j = i + 1; j < 5; j++)
                {
                    if (nums[i] == nums[j]) any = true;
                }
            }

            lock (o)
            {
                Console.Write("Fékk ");
                for (int i = 0; i < 5; i++)
                {
                    Console.Write(" " + nums[i]);
                }

                Console.Write(" " + (any ? "tvær eða fleiri tölur eins" : "engin tala eins"));
            }

        }).Start();

        new Thread(() =>
        {
            int i = 20;
            while (true)
            {
                lock (o) { Console.WriteLine(i); }
                Thread.Sleep(1000);
                if (i-- == 0) i = 20;
            }
        }).Start();

        while (true) Thread.Sleep(1000);
    }
}