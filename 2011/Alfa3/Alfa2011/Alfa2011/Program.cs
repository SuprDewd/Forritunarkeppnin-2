using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SharpBag;
using SharpBag.Math.Geometry;
using SharpBag.Misc;

namespace Alfa2011
{
    class Program
    {
        static void Main(string[] args)
        {
            new Alfa2011Controller().Run();
        }
    }

    public class Alfa2011Controller : ProblemController
    {
        public Alfa2011Controller() : base("Forritunarkeppni Framhaldsskólanna 2011") { }

        [Problem("01", Description = "Problem 01")]
        public void P01()
        {
            this.WriteLine("1. reikna radíus");
            this.WriteLine("2. reikna yfirborðsflatarmál");
            string c = this.Read("Veldu");
            double d = this.ReadDouble("Tala");
            if (c == "2")
            {
                this.WriteLine(4 * Math.PI * d * d);
            }
            else
            {
                this.WriteLine(Math.Sqrt(d / (4 * Math.PI)));
            }
        }

        [Problem("02", Description = "Problem 02")]
        public void P02()
        {
            string txt = this.Read("Texti");
            int cnt = 0;
            bool lastChar = false;
            for (int i = 0; i < txt.Length; i++)
            {
                if (Char.IsLetter(txt[i]))
                {
                    if (!lastChar)
                    {
                        cnt++;
                    }
                    
                    lastChar = true;
                }
                else lastChar = false;
            }

            this.WriteLine(cnt);
        }

        [Problem("03", Description = "Problem 03")]
        public void P03()
        {
            Console.SetBufferSize(Console.BufferWidth * 2, Console.BufferHeight);

            double min = this.ReadDouble("Lágmarkshæð"),
                   max = this.ReadDouble("Hámarkshæð"),
                   step = this.ReadDouble("Þrepun í cm");
            step /= 100;

            this.Write("hæð/þyngd ");
            for (double cur = min; cur - 1E-8 <= max; cur += step)
            {
                this.Write(cur.ToString("0.00").PadLeft(7, ' '));
            }

            this.WriteLine("");

            for (int i = 60; i <= 125; i += 5)
            {
                this.Write(i.ToString().PadRight(10, ' '));

                for (double cur = min; cur - 1E-8 <= max; cur += step)
                {
                    this.Write((i / (cur * cur)).ToString("0.00").PadLeft(7, ' '));
                }

                this.WriteLine("");
            }
        }

        public int gcd(int a, int b)
        {
            if (b == 0) return a;
            return gcd(b, a % b);
        }

        [Problem("04", Description = "Problem 04")]
        public void P04()
        {
            int a = this.Read<int>("Fyrri"),
                b = this.Read<int>("Seinni");

            this.WriteLine(gcd(a, b));
        }

        [Problem("05", Description = "Problem 05")]
        public void P05()
        {
            HashSet<int> correct = new HashSet<int>();
            string c = this.Read("Réttar");
            foreach (var s in c.Split(new char[] {' '}, StringSplitOptions.RemoveEmptyEntries))
            {
                correct.Add(s.As<int>());
            }

            int max = 0;
            while (true)
            {
                string l = this.Read("Röð");
                if (l == "-1") break;
                max = Math.Max(max, l.Split(new char[] { ' ' }, StringSplitOptions.RemoveEmptyEntries).Select(i => i.As<int>()).Count(i => correct.Contains(i)));
            }

            this.WriteLine("Best: " + max);
        }

        [Problem("06", Description = "Problem 06")]
        public void P06()
        {
            string[] ms = System.Globalization.CultureInfo.CurrentCulture.DateTimeFormat.MonthNames;

            foreach (var item in 1.To(12).Select(i => new KeyValuePair<string, int>(ms[i - 1], this.Read<int>("Regn í mánuði " + i))).OrderBy(i => i.Value))
            {
                this.WriteLine("Regn í " + item.Key + " " + item.Value);
            }
        }

        [Problem("07", Description = "Problem 07")]
        public void P07()
        {
            Dictionary<int, int> cnts = new Dictionary<int, int>();
            while (true)
            {
                int cur = this.Read<int>("tala");
                if (cur < 0) break;
                if (cnts.ContainsKey(cur))
                {
                    cnts[cur]++;
                }
                else
                {
                    cnts.Add(cur, 1);
                }
            }

            int max = 0;
            foreach (var item in cnts)
            {
                max = Math.Max(max, item.Value);
            }


            foreach (var item in cnts)
            {
                if (item.Value == max)
                {
                    this.WriteLine(item.Key + " kom " + item.Value + " sinnum");
                }
            }
        }

        [Problem("08", Description = "Problem 08")]
        public void P08()
        {
            double axf = this.ReadDouble("Ax fyrri"),
                ayf = this.Read<int>("Ay fyrri");
            double axs = this.ReadDouble("Ax seinni"),
                ays = this.ReadDouble("Ay seinni");

            double bxf = this.ReadDouble("Bx fyrri"),
                byf = this.ReadDouble("By fyrri");
            double bxs = this.ReadDouble("Bx seinni"),
                bys = this.ReadDouble("By seinni");


            var A = GeometryFactory.Rectangle(new Point(axf, ayf), new Point(axs, ays));
            var B = GeometryFactory.Rectangle(new Point(bxf, byf), new Point(bxs, bys));

            var ab = A.Containment(B);
            var abi = A.Intersection(B);
            var ba = B.Containment(A);
            var bai = B.Intersection(A);

            if (A.Equals(B))
            {
                this.WriteLine("A og B eru eins");
            }
            else if (ab == ContainmentType.Contained)
            {
                this.WriteLine("A umlykur B");
            }
            else if (ba == ContainmentType.Contained)
            {
                this.WriteLine("B umlykur A");
            }
            else if (abi == IntersectionType.Intersected)
            {
                this.WriteLine("A og B skarast");
            }
            else
            {
                this.WriteLine("A og B skarast ekki");
            }
        }

        [Problem("09", Description = "Problem 09")]
        public void P09()
        {
            Dictionary<string, int> nms = new Dictionary<string, int>();
            int cnt = this.Read<int>("Fjöldi");

            for (int i = 0; i < cnt; i++)
            {
                string s = this.Read("Nafn").ToUpper();
                if (nms.ContainsKey(s))
                {
                    nms[s]++;
                }
                else
                {
                    nms.Add(s, 1);
                }
            }

            foreach (var item in nms)
            {
                if (item.Value > 1)
                {
                    this.WriteLine(item.Key + " kemur " + item.Value + " sinnum");
                }
            }
        }

        int clockToInt(string s)
        {
            string[] ss = s.Split(':');
            return Convert.ToInt32(ss[0]) * 60 + Convert.ToInt32(ss[1]);
        }

        [Problem("10", Description = "Problem 10")]
        public void P10()
        {
            double ac = clockToInt(this.Read("Fyrsti kl"));
            double al = this.Read<int>("Fyrsti lengd");
            double bc = clockToInt(this.Read("Annar kl"));
            double bl = this.Read<int>("Annar lengd");
            double cc = clockToInt(this.Read("Þriðji kl"));

            this.WriteLine("Lengd þá " + ((bl - al) / (bc - ac) * (bc - cc) + al));
        }
    }
}
