using System;
using System.IO;
using System.Threading;

public class Program
{
	public static void Main()
	{
		object obj = new object();
		new Thread(() => {
			int i = 20;
			while (true)
			{
				lock (obj)
				{
					
					Console.WriteLine(i--);
				}

				if (i == -1)
				{
					i = 20;
				}

				Thread.Sleep(1000);
			}
		}).Start();

		new Thread(() => {
			Random rand = new Random();
			while (true)
			{
				Thread.Sleep(2512);
				lock (obj)
				{
					int[] arr = new int[5];
					Console.Write("Fékk ");

					for (int i = 0; i < 5; i++)
					{
						if (i != 0) Console.Write(", ");
						arr[i] = rand.Next(1, 7);
						Console.Write(arr[i]);
					}


					bool eins = false;
					for (int i = 0; i < 5; i++)
					{
						for (int j = i + 1; j < 5; j++)
						{
							if (arr[i] == arr[j])
							{
								eins = true;
								break;
							}
						}

						if (eins) break;
					}

					if (eins)
					{
						Console.WriteLine(" tvær eða fleiri tölur eins");
					}
					else
					{
						Console.WriteLine(" engin tala eins");
					}
				}
			}
		}).Start();

		Console.ReadLine();
	}
}