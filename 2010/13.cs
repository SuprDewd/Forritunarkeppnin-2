using System;
using System.Threading;

public class Program
{
	static volatile int numDone = 0;

	public static void Main()
	{
		int money = 100000;
		Random rand = new Random();
		object lck = new object();
		Console.WriteLine("Á bankabók = " + money);

		new Thread(() => {
			int sum = 0;
			while (sum < 60000)
			{
				int slp = rand.Next(0, 5000);
				sum += slp;
				Thread.Sleep(slp);
				lock (lck)
				{
					Console.WriteLine("");
					Console.WriteLine("Þráður A fær leyfi til að leggja inn á bók.");
					int c = rand.Next(500, 10000);
					Console.WriteLine("Ætla að leggja inn " + c + " kr.");
					money += c;
					Console.WriteLine("Á bankabók = " + money);
				}
			}

			numDone++;
		}).Start();

		new Thread(() => {
			int sum = 0;
			while (sum < 60000)
			{
				int slp = rand.Next(0, 5000);
				sum += slp;
				Thread.Sleep(slp);
				lock (lck)
				{
					Console.WriteLine("");
					Console.WriteLine("Þráður B fær leyfi til að taka út af bók.");
					int c = rand.Next(500, 10000);
					Console.WriteLine("Ætla að taka út " + c + " kr.");
					money -= c;
					Console.WriteLine("Á bankabók = " + money);
				}
			}

			numDone++;
		}).Start();

		while (numDone < 2)
		{
			Thread.Sleep(500);
		}
	}
}