using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;

public class Program
{
	public static void Main()
	{
		Console.Write("Nafn skrár: ");
		string skra = Console.ReadLine();
		Console.Write("Fjöldi: ");
		int nyrfjoldi = Convert.ToInt32(Console.ReadLine());

		string[] lines = File.ReadAllLines(skra);
		int fjoldi = Convert.ToInt32(lines[0]);

		foreach (string line in lines.Skip(1))
		{
			if (line == "*") break;
			string[] split = line.Split(' ');
			Console.Write(split[0]);
			Console.Write(" ");
			Console.Write(Convert.ToDouble(split[1]) / fjoldi * nyrfjoldi);
			Console.Write(" ");
			Console.WriteLine(split[2]);
		}
	}
}