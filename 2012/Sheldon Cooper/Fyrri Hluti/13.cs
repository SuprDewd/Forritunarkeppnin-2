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
		var x = File.ReadAllLines(Console.ReadLine()).Select(i => i.Split(' ')).Select(i => new { a = i[0], t = Convert.ToInt32(i[1]) * 60 + Convert.ToInt32(i[2]) }).OrderByDescending(i => i.t).First();
		Console.WriteLine(x.a + " var fljótastur");
	}
}