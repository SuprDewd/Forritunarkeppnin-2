using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;
using System.Threading;

public class Program
{
	public static void Main()
	{
		int sek = Convert.ToInt32(Console.ReadLine());

		for (int i = 1; i <= sek; i++)
		{
			Thread.Sleep(1000);
			if (i % 3 == 0)
			{
				Console.WriteLine("Gult " + i);
			}
			if (i % 5 == 0)
			{
				Console.WriteLine("Grænt " + i);
			}
		}
	}
}