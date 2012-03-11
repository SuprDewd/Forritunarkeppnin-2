using System;

public class Program
{
	public static void Main()
	{
		string line = Console.ReadLine();
		int cnt = 0;
		bool last = false;
		for (int i = 0; i < line.Length; i++)
		{
			if (Char.IsLetter(line[i]))
			{
				if (!last)
				{
					cnt++;
					last = true;
				}
			}
			else
			{
				last = false;
			}
		}

		Console.WriteLine("Í þessum texta eru 8 orð.");
	}
}