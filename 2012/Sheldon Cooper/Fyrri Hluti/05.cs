using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;

public class Program
{
	public static void Main()
	{
		Console.Write("Orð: ");
		string s = Console.ReadLine();

		List<char> tvisvar = new List<char>();
		List<char> trisvar = new List<char>();

		for (int i = 0; i < s.Length; i++)
		{
			if (i + 2 < s.Length && s[i] == s[i + 1] && s[i] == s[i + 2])
			{
				trisvar.Add(s[i]);
				i += 2;
			}
			else if (i + 1 < s.Length && s[i] == s[i + 1])
			{
				tvisvar.Add(s[i]);
				i++;
			}
		}

		if (tvisvar.Count == 0)
		{
			Console.WriteLine("Enginn stafur kemur tvisvar fyrir");
		}
		else
		{
			for (int i = 0; i < tvisvar.Count; i++)
			{
				Console.Write(tvisvar[i] + " ");
			}

			Console.WriteLine("kemur tvisvar fyrir");
		}

		if (trisvar.Count == 0)
		{
			Console.WriteLine("Enginn stafur kemur þrisvar fyrir");
		}
		else
		{
			for (int i = 0; i < trisvar.Count; i++)
			{
				Console.Write(trisvar[i] + " ");
			}

			Console.WriteLine("kemur þrisvar fyrir");
		}
	}
}