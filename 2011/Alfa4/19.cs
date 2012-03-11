using System;
using System.IO;
using System.Collections.Generic;
using System.Text;
using System.Linq;

public class Program
{
	public class Name
	{
		public string Fornafn;
		public string Millinafn;
		public string Eftirnafn;

		public Name(string name)
		{
			string[] nms = name.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries);
			Fornafn = nms[0];
			Eftirnafn = nms[nms.Length - 1];
			Millinafn = nms.Length > 2 ? String.Join(" ", nms.Skip(1).Take(nms.Length - 2).ToArray()) : null;
		}

		public override string ToString()
		{
			return Fornafn + " " + (Millinafn != null ? Millinafn + " " : "") + Eftirnafn;
		}
	}

	public static void Main()
	{
		List<Name> names = new List<Name>();

		using (StreamReader sr = new StreamReader("Nofn.txt"))
		{
			string line;
			while ((line = sr.ReadLine()) != null)
			{
				names.Add(new Name(line));
			}
		}

		foreach (Name nm in names.OrderBy(i => i.Fornafn.ToUpper()).ThenBy(i => i.Eftirnafn.ToUpper()).ThenBy(i => (i.Millinafn ?? "").ToUpper()))
		{
			Console.WriteLine(nm.ToString());
		}
	}
}