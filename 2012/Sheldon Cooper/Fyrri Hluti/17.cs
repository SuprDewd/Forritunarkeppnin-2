using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;

public class Program
{
	public static void Main()
	{
		Console.Write("Skrá: ");
		string skra = Console.ReadLine();
		string txt = File.ReadAllText(skra);

		string chars = "AÁBCDÐEÉFGHIÍJKLMNOÓPQRSTUÚVWXYZÞÆÖ";
		int[] cnts = new int[chars.Length];

		int max = 0;

		for (int i = 0; i < chars.Length; i++)
		{
			int cur = 0;
			for (int j = 0; j < txt.Length; j++)
			{
				if (Char.ToUpper(txt[j]) == chars[i])
				{
					cur++;
				}
			}

			cnts[i] = cur;

			if (cur > max) max = cur;
		}
		
		Console.WriteLine();

		for (int i = max; i > 0; i--)
		{
			for (int j = 0; j < chars.Length; j++)
			{
				if (cnts[j] >= i)
				{
					Console.Write("*");
				}
				else
				{
					Console.Write(" ");
				}
			}

			Console.WriteLine();
		}

		Console.WriteLine(chars);
	}
}