using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;

public class Program
{
	public static void Main()
	{
		Console.Write("Texti: ");
		string t = Console.ReadLine();
		Dictionary<char, int> found = new Dictionary<char, int>();

		for (int i = 0; i < t.Length; i++)
		{
			if (Char.IsLetter(t[i]))
			{
				if (found.ContainsKey(t[i]))
				{
					found[t[i]]++;
				}
				else
				{
					found.Add(t[i], 1);
				}
			}
		}

		foreach (KeyValuePair<char, int> r in found.OrderBy(i => i.Key))
		{
			for (int j = 0; j < r.Value; j++)
			{
				Console.Write(r.Key);
			}

			Console.WriteLine();
		}
	}
}