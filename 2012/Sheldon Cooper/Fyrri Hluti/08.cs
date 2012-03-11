using System;
using System.Collections.Generic;
using System.Linq;
using System.IO;
using System.Text;

public class Program
{
	public static void Main()
	{
		Console.Write("Inntak: ");
		string inn = Console.ReadLine();
		Console.Write("Úttak: ");
		string ut = Console.ReadLine();
		Console.Write("Skipta út: ");
		string sk1 = Console.ReadLine();
		Console.Write("Skipta út fyrir: ");
		string sk2 = Console.ReadLine();

		File.WriteAllText(ut, File.ReadAllText(inn).Replace(sk1, sk2));
	}
}