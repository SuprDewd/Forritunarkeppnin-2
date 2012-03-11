using System;
using System.Text;
using System.Text.RegularExpressions;

public class Program
{
	public static void Main()
	{
		string s = Console.ReadLine();
		bool b = Regex.IsMatch(s, @"\(-?[0-9]+,-?[0-9]+\)\(-?[0-9]+,-?[0-9]+\)\(-?[0-9]+,-?[0-9]+\)\(-?[0-9]+,-?[0-9]+\)");
		Console.WriteLine(b ? "Rétt" : "Rangt");
	}
}