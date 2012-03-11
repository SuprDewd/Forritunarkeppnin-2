using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;

public static class Program
{
    public class Cmp : IComparer<string>
    {
        private const string rod = "áabcdéefghíijklmnóoprstúuvxýyzþæö";

        public int Compare(string x, string y)
        {
            int min = Math.Min(x.Length, y.Length);
            for (int i = 0; i < min; i++)
            {
                if (x[i] != y[i])
                {
                    return rod.IndexOf(x[i]).CompareTo(rod.IndexOf(y[i]));
                }
            }

            return x.Length.CompareTo(y.Length);
        }
    }

    public static void ForEach<T>(this IEnumerable<T> coll, Action<T> a)
    {
        foreach (var item in coll)
        {
            a(item);
        }
    }

    public static void Main()
    {
        File.ReadAllLines("18.txt").OrderBy(i => i.ToLower(), new Cmp()).ForEach(i => Console.WriteLine(i));
        Console.ReadLine();
    }
}