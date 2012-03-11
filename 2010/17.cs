using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;

public class Program
{
    public static void Main()
    {
        Dictionary<char, int> chars = new Dictionary<char, int>();
        using (StreamReader sr = new StreamReader("17.txt"))
        {
            string line;
            while ((line = sr.ReadLine()) != null)
            {
                for (int i = 0; i < line.Length; i++)
                {
                    if (Char.IsLetter(line[i]))
                    {
                        char cur = Char.ToLower(line[i]);
                        if (chars.ContainsKey(cur))
                        {
                            chars[cur]++;
                        }
                        else
                        {
                            chars.Add(cur, 1);
                        }
                    }
                }
            }
        }

        foreach (var item in chars.OrderByDescending(i => i.Value))
        {
            Console.WriteLine(item.Key + " " + item.Value);
        }
    }
}