using System;
using System.IO;

public class Program
{
    public static char[] ser = new char[] { 'A', 'Á', 'E', 'É', 'Y', 'Ý', 'U', 'Ú', 'I', 'Í', 'O', 'Ó' };

    public static string ri(string s)
    {
        int b = s.LastIndexOfAny(ser),
            a = s.Length - 1;

        while (!Char.IsLetter(s[a])) a--;
        return s.Substring(b, a - b + 1);
    }

    public static void Main()
    {
        for (int i = 0; i < ser.Length; i++)
        {
            ser[i] = Char.ToUpper(ser[i]);
        }

        string[] lines = File.ReadAllLines("16.txt");

        string a = ri(lines[0].ToUpper()),
               b = ri(lines[1].ToUpper()),
               c = ri(lines[2].ToUpper()),
               d = ri(lines[3].ToUpper());

        Console.WriteLine(a);
        Console.WriteLine(b);
        Console.WriteLine(c);
        Console.WriteLine(d);

        if (a == b && b == c && c == d)
        {
            Console.WriteLine("Samhent rím");
        }
        else if (a == b && c == d)
        {
            Console.WriteLine("Stafhent rím");
        }
        else if (a == c && b == d)
        {
            Console.WriteLine("Ferskeytla");
        }
        else
        {
            Console.WriteLine("Ekkert rím");
        }
    }
}