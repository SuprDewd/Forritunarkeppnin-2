/*
	Bjarki Ágúst Guðmundsson
	Æfing 28. desember 2011
	Tók 2 klst og 40 mín
	Öll dæmi kláruð nema dæmi 7 og dæmi 15, ekki viss með dæmi 12

	- Dæmi 7 klárað (gert eftir æfingu). (http://en.wikipedia.org/wiki/Round-robin_tournament#Scheduling_algorithm)
*/

#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <time.h>
#include <string>
#include <cstring>
#include <locale>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()
#define INF 2147483647

template <class T> int size(T x) { return x.size(); }

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	if (n <= 13) return true;

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0) return false;
		if (n % (i + 2) == 0) return false;
	}

	return true;
}

void d1()
{
	int n;
	cin >> n;
	cout << (isPrime(n) ? "prímtala" : "ekki prímtala") << endl;
}

void d2()
{
	string s;
	cin >> s;
	int res = 0;

	for (int i = 0; i < size(s); i++) res = res * 2 + (s[i] == '1' ? 1 : 0);
	cout << res << endl;
}

void my_sort(int* arr, int cnt)
{
	for (int i = 1; i < cnt; i++)
	{
		int j = i;
		while (j > 0 && arr[j - 1] > arr[j])
		{
			int temp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = temp;
			j--;
		}
	}
}

void d3()
{
	cout << "Fjöldi: ";
	int cnt;
	cin >> cnt;
	int* arr = new int[cnt];
	for (int i = 0; i < cnt; i++) cin >> arr[i];
	my_sort(arr, cnt);
	for (int i = 0; i < cnt; i++) cout << arr[i] << " ";
	cout << endl;
}

string fix(string s)
{
	string res = "";
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z') res = res + s[i];
		else if (s[i] >= 'A' && s[i] <= 'Z') res = res + static_cast<char>(s[i] - 'A' + 'a');
	}

	return res;
}

void d5()
{
	scanf("\n");
	string line;
	getline(cin, line);
	line = fix(line);

	bool a = true;
	for (int i = 0, j = size(line) - 1; i < j; i++, j--)
	{
		if (line[i] != line[j]) { a = false; break; }
	}

	cout << (a ? "symmetrisk" : "ekki symmetrisk") << endl;
}

void d4()
{
	string last, cur;
	cin >> last;

	bool all = true;
	while (cin >> cur)
	{
		if (cur == "#") break;
		if (last[size(last) - 1] != cur[0]) all = false;
		last = cur;
	}

	cout << (all ? "keðja" : "ekki keðja") << endl;
}

void umrada(string s, int i)
{
	if (i == 0) return;
	string nxt = s[size(s) - 1] + s.substr(0, size(s) - 1);
	cout << nxt << endl;
	umrada(nxt, i - 1);
}

void d6()
{
	string s;
	cin >> s;
	umrada(s, size(s));
}

int bitcount(int x)
{
	int cnt = 0;
	while (x) cnt++, x &= (x - 1);
	return cnt;
}

void d7()
{
	// http://en.wikipedia.org/wiki/Round-robin_tournament#Scheduling_algorithm

	int cnt;
	scanf("%d\n", &cnt);
	string* names = new string[cnt];
	for (int i = 0; i < cnt; i++)
	{
		getline(cin, names[i]);
	}

	int curcnt = cnt + (cnt & 1);
	int* arr = new int[curcnt];
	for (int i = 0; i < curcnt; i++)
	{
		arr[i] = i < cnt ? i : -1;
	}

	int rnd = 1;

	do
	{
		cout << endl;
		cout << rnd++ << ". umferð:" << endl;
		for (int i = 0; i < (curcnt >> 1); i++)
		{
			int a = arr[i],
				b = arr[curcnt - i - 1];

			if (a == -1 || b == -1) continue;

			cout << "\t" << names[a] << " - " << names[b] << endl;
		}

		int* arr2 = new int[curcnt];
		arr2[0] = arr[0];
		for (int i = 1; i < curcnt; i++)
		{
			int to = i + 1;
			if (to == curcnt) to = 1;
			arr2[to] = arr[i];
		}

		delete[] arr;
		arr = arr2;

	} while (arr[1] != 1);
}

void d8()
{
	int d, m;
	cin >> d >> m;

	if (m == 12)
	{
		if (d == 12) cout << "Stekkjastaur kemur" << endl;
		else if (d == 13) cout << "Giljagaur kemur" << endl;
		else if (d == 14) cout << "Stúfur kemur" << endl;
		else if (d == 15) cout << "Þvörusleikir kemur" << endl;
		else if (d == 16) cout << "Pottaskefill kemur" << endl;
		else if (d == 17) cout << "Askasleikir kemur" << endl;
		else if (d == 18) cout << "Hurðaskellir kemur" << endl;
		else if (d == 19) cout << "Skyrjarmur kemur" << endl;
		else if (d == 20) cout << "Bjúgnakrækir kemur" << endl;
		else if (d == 21) cout << "Gluggagægir kemur" << endl;
		else if (d == 22) cout << "Gáttaþefur kemur" << endl;
		else if (d == 23) cout << "Ketkrókur kemur" << endl;
		else if (d == 24) cout << "Kertasníkir kemur" << endl;

		else if (d == 25) cout << "Stekkjastaur fer" << endl;
		else if (d == 26) cout << "Giljagaur fer" << endl;
		else if (d == 27) cout << "Stúfur fer" << endl;
		else if (d == 28) cout << "Þvörusleikir fer" << endl;
		else if (d == 29) cout << "Pottaskefill fer" << endl;
		else if (d == 30) cout << "Askasleikir fer" << endl;
		else if (d == 31) cout << "Hurðaskellir fer" << endl;

		else cout << "Enginn jólasveinn í dag" << endl;
	}
	else if (m == 1)
	{
		if (d == 1) cout << "Skyrjarmur fer" << endl;
		else if (d == 2) cout << "Bjúgnakrækir fer" << endl;
		else if (d == 3) cout << "Gluggagægir fer" << endl;
		else if (d == 4) cout << "Gáttaþefur fer" << endl;
		else if (d == 5) cout << "Ketkrókur fer" << endl;
		else if (d == 6) cout << "Kertasníkir fer" << endl;

		else cout << "Enginn jólasveinn í dag" << endl;
	}

	else cout << "Enginn jólasveinn í dag" << endl;
}

map<int, int> fibmem;

int fib(int n)
{
	if (n == 0) return 1;
	if (n == 1) return 1;
	int& res = fibmem[n];

	if (res == 0)
	{
		res = fib(n - 1) + fib(n - 2);
	}

	return res;
}

void d9()
{
	int cnt;
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cout << fib(i) << " ";
	}

	cout << endl;
}

void d10()
{
	int a, b, c;
	cin >> a >> b >> c;
	bool x = a == b,
	 	 y = b == c;

	int arr[3];
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;

	sort(arr, arr + 3);

	if (x && y) cout << "Jafnarma" << endl;
	else if (x || y) cout << "Jafnhliða" << endl;
	else if (arr[0] * arr[0] + arr[1] * arr[1] == arr[2] * arr[2]) cout << "90 gráður" << endl;
	else cout << "Ekkert af þessu" << endl;
}

void d11()
{
	set<char> ac, bc;
	string a, b;
	cin >> a >> b;

	for (int i = 0; i < size(a); i++)
	{
		ac.insert(a[i]);
	}

	for (int i = 0; i < size(b); i++)
	{
		bc.insert(b[i]);
	}

	for (int i = 0; i < size(a); i++)
	{
		if (ac.find(a[i]) != ac.end() && bc.find(a[i]) != bc.end())
		{
			cout << static_cast<char>(a[i] - 'a' + 'A');
		}
		else
		{
			cout << a[i];
		}
	}

	cout << " ";

	for (int i = 0; i < size(b); i++)
	{
		if (ac.find(b[i]) != ac.end() && bc.find(b[i]) != bc.end())
		{
			cout << static_cast<char>(b[i] - 'a' + 'A');
		}
		else
		{
			cout << b[i];
		}
	}

		cout << endl;
}

void d12()
{
	double x1, y1,
		x2, y2,
		x3, y3;

	cin >> x1 >> y1 >>
		   x2 >> y2 >>
		   x3 >> y3;

   	double a = (y2 - y1) / (x2 - x1),
   		   b = (y3 - y2) / (x3 - x2);

  	if (abs(a - b) < 0.0001)
  	{
  		cout << "Getur ekki myndað þríhyrning" << endl;
  	}
  	else
  	{
  		cout << "Getur myndað þríhyrning" << endl;
  	}
}

char mem['z' - 'a' + 1];
int pt = 0;

int exec(string line, int i)
{
	bool cont = true;
	while (cont)
	{
		cont = false;
		for (int j = i; j < size(line); j++)
		{
			if (line[j] == '>') pt = (pt + 1) % ('z' - 'a' + 1);
			else if (line[j] == '<') { pt--; if (pt < 0) pt += 'z' - 'a' + 1; }
			else if (line[j] == '+') mem[pt]++;
			else if (line[j] == '-') mem[pt]--; // { mem[pt]--; if (mem[pt] < 0) mem[pt] = 0; }
			else if (line[j] == '.') cout << static_cast<char>('a' + pt);
			else if (line[j] == ',') cout << ' ';
			else if (line[j] == '[') j = exec(line, j + 1);
			else if (line[j] == ']')
			{
				if (mem[pt] == 0) return j;
				else { cont = true; break; }
			}
		}
	}

	throw "ERROR";
}

void d13()
{
	memset(mem, 0, 'z' - 'a' + 1);
	pt = 0;

	scanf("\n");
	string line;
	getline(cin, line);

	exec(line, 0);
	cout << endl;
}

void d14()
{
	int a, b, n;
	cin >> a >> b >> n;
	int* arr = new int[n];
	arr[0] = a;
	arr[1] = b;

	for (int i = 2; i < n; i++)
	{
		if (i & 1) arr[i] = arr[i - 1] + arr[i - 2];
		else arr[i] = 2 * arr[i - 1] - arr[i - 2];
	}

	cout << arr[n - 1] << endl;
}

void d15() // TODO: finish
{
	/*ifstream ins("hreinsainn.txt");
	ofstream outs("hreinsa.txt");

	string line;
	int depth = 0;

	while (getline(ins, line))
	{
		bool lastSlash = false,
			 lastStar = false,
			 ignoreLine = false;

		for (int i = 0; i < size(line); i++)
		{
			if (line[i] == '/')
			{
			}
		}
	}*/
}

bool isPerfectNum(int n)
{
	int sum = 0;
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0) sum += i;
	}

	return sum == n;
}

void d16()
{
	int n;
	cin >> n;

	if (n == 1)
	{
		cout << 6 << endl;
		return;
	}

	int cur = 0,
		i = 1;

	n--;
	while (n > 0)
	{
		cur += i * i * i;
		i += 2;

		if (isPerfectNum(cur)) n--;
	}

	cout << cur << endl;
}

void d17()
{
	int x, y;
	cin >> x >> y;
	int b = (4 * x - y) / 2,
		a = x - b;

	cout << "Það fórust " << a << " nautgripir og " << b << " kjúklingar"<< endl;
}

void d18()
{
	stack<double> nums;

	scanf("\n");
	string line;
	getline(cin, line);

	for (int i = 0; i < size(line); i++)
	{
		if (line[i] == '+')
		{
			double a, b;
			b = nums.top();
			nums.pop();
			a = nums.top();
			nums.pop();
			nums.push(a + b);
		}
		else if (line[i] == '*')
		{
			double a, b;
			b = nums.top();
			nums.pop();
			a = nums.top();
			nums.pop();
			nums.push(a * b);
		}
		else if (line[i] == '-')
		{
			double a, b;
			b = nums.top();
			nums.pop();
			a = nums.top();
			nums.pop();
			nums.push(a - b);
		}
		else if (line[i] == '/')
		{
			double a, b;
			b = nums.top();
			nums.pop();
			a = nums.top();
			nums.pop();
			nums.push(a / b);
		}
		else if (line[i] >= '0' && line[i] <= '9')
		{
			nums.push(line[i] - '0');
		}
	}

	cout << nums.top() << endl;
}

void d19()
{
	string s;
	scanf("\n");
	getline(cin, s);

	int arr[10];

	for (int i = 0, j = 0; i < size(s); i++)
	{
		char bla = s[i];
		if (bla == '-') { continue; }
		arr[j++] = bla == 'X' ? 10 : bla - '0';
	}

	int s1 = 0, s2 = 0;

	for (int i = 0; i < 10; i++)
	{
		s1 += arr[i];
		s2 += s1;
	}

	cout << (s2 % 11 == 0 ? "Lögleg" : "Ólögleg") << endl;
}

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

class AlmenntBrot
{
public:
	int iNefnari;
	int iTeljari;

	AlmenntBrot(int n, int t) { int g = gcd(n, t); iNefnari = n / g; iTeljari = t / g; }

	void SkrifaUt()
	{
		cout << iNefnari << "/" << iTeljari << endl;
	}
};

AlmenntBrot operator +(AlmenntBrot a, AlmenntBrot b)
{
	return AlmenntBrot(a.iNefnari * b.iTeljari + b.iNefnari * a.iTeljari, a.iTeljari * b.iTeljari);
}

AlmenntBrot operator -(AlmenntBrot a, AlmenntBrot b)
{
	return AlmenntBrot(a.iNefnari * b.iTeljari - b.iNefnari * a.iTeljari, a.iTeljari * b.iTeljari);
}

AlmenntBrot operator *(AlmenntBrot a, AlmenntBrot b)
{
	return AlmenntBrot(a.iNefnari * b.iNefnari, a.iTeljari * b.iTeljari);
}

AlmenntBrot operator /(AlmenntBrot a, AlmenntBrot b)
{
	return AlmenntBrot(b.iTeljari * a.iNefnari, b.iNefnari * a.iTeljari);
}

void d20()
{
	AlmenntBrot a(1, 5),
				b(10, 8);

	a.SkrifaUt();
	b.SkrifaUt();
	a = a + b;
	a.SkrifaUt();
	b = a / b;
	b.SkrifaUt();
	a = a * b + b / a - (b + a);
	a.SkrifaUt();
}

class MinBidrod
{
public:
	MinBidrod() { iTala1 = iTala2 = iTala3 = iTala4 = 0; }

	stack<int> Stafli1;
	stack<int> Stafli2;
	int iTala1;
	int iTala2;
	int iTala3;
	int iTala4;

	void enque(int i)
	{
		Stafli1.push(i);
		iTala1++;
	}

	int deque()
	{
		while (iTala1 > 1)
		{
			Stafli2.push(Stafli1.top());
			Stafli1.pop();
			iTala1--;
			iTala2++;
		}

		iTala3 = Stafli1.top();
		Stafli1.pop();
		iTala1--;

		while (iTala2 > 0)
		{
			Stafli1.push(Stafli2.top());
			Stafli2.pop();
			iTala2--;
			iTala1++;
		}

		return iTala3;
	}

	void BirtaRod()
	{
		while (iTala1 > 0)
		{
			Stafli2.push(Stafli1.top());
			Stafli1.pop();
			iTala1--;
			iTala2++;
		}

		while (iTala2 > 0)
		{
			iTala4 = Stafli2.top();
			cout << iTala4 << " ";
			Stafli1.push(iTala4);
			Stafli2.pop();
			iTala2--;
			iTala1++;
		}

		cout << endl;
	}
};

void d21()
{
	try {
	MinBidrod b;
	b.enque(11);
	b.BirtaRod();
	b.enque(25);
	b.BirtaRod();
	cout << "Deq: " << b.deque() << endl;
	b.BirtaRod();
	cout << "Deq: " << b.deque() << endl;
	b.BirtaRod();
	} catch (string x) { cout << x << endl; }
}

int main()
{
	locale::global(locale(""));

	while (true)
	{
		cout << "Dæmi: ";
		string d;
		cin >> d;
		cout << endl;

		if (d == "x") break;
		else if (d == "1") d1();
		else if (d == "2") d2();
		else if (d == "3") d3();
		else if (d == "4") d4();
		else if (d == "5") d5();
		else if (d == "6") d6();
		else if (d == "7") d7(); // TODO
		else if (d == "8") d8();
		else if (d == "9") d9();
		else if (d == "10") d10();
		else if (d == "11") d11();
		else if (d == "12") d12();
		else if (d == "13") d13();
		else if (d == "14") d14();
		else if (d == "15") d15(); // TODO
		else if (d == "16") d16();
		else if (d == "17") d17();
		else if (d == "18") d18();
		else if (d == "19") d19();
		else if (d == "20") d20();
		else if (d == "21") d21();

		cout << endl;
	}
}