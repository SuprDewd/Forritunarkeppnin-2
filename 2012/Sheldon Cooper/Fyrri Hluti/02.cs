using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;

public class Program
{
	public static bool Check(string s)
	{
		if (s.Length != 7) return false;
		for (int i = 0; i < 3; i++)
		{
			if (!Char.IsLetter(s[i]) || !Char.IsUpper(s[i])) return false;
		}

		for (int i = 3; i < 7; i++)
		{
			if (!(s[i] >= '0' && s[i] <= '9')) return false;
		}

		return true;
	}

	public static void Main()
	{
		Console.Write("Skammstöfun: ");
		string s = Console.ReadLine();
		Console.WriteLine(Check(s) ? "Löglegt" : "Ekki löglegt");
	}
}