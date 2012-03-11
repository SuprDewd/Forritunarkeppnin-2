using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading;

public class Program
{
	public static volatile int done = 0;
	
	public static void Main()
	{
		int stop = Convert.ToInt32(Console.ReadLine());
		new Thread(() => 
		{
			for (int i = 1; i <= stop / 3; i++)
			{
				Thread.Sleep(3000);
				Console.WriteLine("Gult " + 3 * i);
			}

			done++;
		}).Start();

		new Thread(() => 
		{
			for (int i = 1; i <= stop / 5; i++)
			{
				Thread.Sleep(5000);
				Console.WriteLine("Grænt " + 5 * i);
			}

			done++;
		}).Start();

		while (true)
		{
			Thread.Sleep(500);
			if (done == 2) break;
		}
	}
}