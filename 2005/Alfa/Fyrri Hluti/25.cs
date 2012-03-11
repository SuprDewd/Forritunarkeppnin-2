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
		Random rand = new Random();

		string rettur = null;
		new Thread(() => {
			string[] rettir = new string[]{ "hafragrautur", "hrútspungar", "soðin ýsa", "súr hvalur" };
			while (true)
			{
				int slp = 0;
				lock (rand) slp = rand.Next(1000, 2000);
				Thread.Sleep(slp);
				lock (rand)
				{
					rettur = rettir[rand.Next(0, rettir.Length)];
				}
			}
		}).Start();

		new Thread(() => {
			string[] stuff = new string[]{ "namm", "ojj", "nommi nomm" };
			while (true)
			{
				Thread.Sleep(250);
				lock (rand)
				{
					if (rettur != null)
					{
						Console.WriteLine(stuff[rand.Next(0, stuff.Length)] + " " + rettur);
						rettur = null;
					}
				}
			}
		}).Start();

		while (true)
		{
			Thread.Sleep(500);
		}
	}
}