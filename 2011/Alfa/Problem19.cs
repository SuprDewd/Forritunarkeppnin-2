using System;
using System.Text;
using System.Linq;
using System.IO;

public class Program
{
    public class Nafn : IComparable<Nafn>
    {
        public Nafn(string nafn)
        {
            A = B = C = "";
            string[] ss = nafn.Split(' ');

            A = ss[0];
            C = ss[ss.Length - 1];

            if (ss.Length > 2)
            {
                B = "";
                for (int i = 1; i < ss.Length - 1; i++)
                {
                    if (i != 1) B += " ";
                    B += ss[i];
                }
            }
        }

        public string A { get; private set; }

        public string B { get; private set; }

        public string C { get; private set; }

        public int CompareTo(Nafn other)
        {
            if (other.A.ToUpper() == this.A.ToUpper())
            {
                if (other.C.ToUpper() == this.C.ToUpper()) return this.B.ToUpper().CompareTo(other.B.ToUpper());
                return this.C.ToUpper().CompareTo(other.C.ToUpper());
            }

            return this.A.ToUpper().CompareTo(other.A.ToUpper());
        }
    }

    public static void Main()
    {
        File.ReadAllLines("Nofn.txt").OrderBy(i => new Nafn(i)).ForEach(i => Console.WriteLine(i));
        Console.ReadLine();
    }
}