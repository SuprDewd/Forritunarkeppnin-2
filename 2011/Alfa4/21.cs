using System;
using System.IO;
using System.Text;
using System.Linq;

public class Program
{
	public static void Main()
	{
		Console.WriteLine("Texti 1: ");
		string a = Console.ReadLine();
		Console.WriteLine("Texti 2: ");
		string b = Console.ReadLine();

		string[] asplit = a.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries).Select(i => i.ToLower()).OrderBy(i => i).ToArray();
		string[] bsplit = b.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries).Select(i => i.ToLower()).OrderBy(i => i).ToArray();

		Console.WriteLine(asplit.SequenceEqual(bsplit) ? "Innihalda sömu orð" : "Innihalda ekki sömu orð");
	}
}