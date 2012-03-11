/*
	Bjarki Ágúst Guðmundsson
	Æfing 29. desember 2011
	Tók 1 klst og 50 mín
	Öll dæmi kláruð
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
#include <fstream>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()
#define INF 2147483647

template <class T> int size(T x) { return x.size(); }

void d1()
{
	double a, b;
	cin >> a >> b;
	cout << (a + b) / 2.0 << endl;
}

void d2()
{
	double cm;
	cin >> cm;
	cout << cm / 2.54 << endl;
}

void d3()
{
	double arr[2];
	cin >> arr[0] >> arr[1];
	sort(arr, arr + 2);
	if (arr[0] == arr[1]) cout << "eins: " << arr[0] << endl;
	else
	{
		cout << "lægri: " << arr[0] << endl;
		cout << "hærri: " << arr[1] << endl;
	}
}

int mypow(int a, int e)
{
	if (e == 0) return 1;
	return a * mypow(a, e - 1);
}

void d4()
{
	int a, e;
	cin >> a >> e;
	cout << mypow(a, e) << endl;
}

void d5()
{
	int mn = INF, mx = -INF;
	for (int i = 0; i < 10; i++)
	{
		int n;
		cin >> n;
		mn = min(mn, n);
		mx = max(mx, n);
	}

	cout << "minnsta: " << mn << endl;
	cout << "stærsta: " << mx << endl;
}

void d6()
{
	int s = 0;
	for (int i = 0; i < 15; i++)
	{
		s += 2 * i + 1;
		cout << (i + 1) << "\t" << 2 * i + 1 << "\t" << s << endl;
	}
}

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

void d7()
{
	int a, b;
	cin >> a >> b;
	cout << gcd(a, b) << endl;
}

void d8()
{
	int nums[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> nums[i];
	}

	sort(nums, nums + 10);

	cout << endl;

	for (int i = 0; i < 10; i++)
	{
		cout << nums[i] << endl;
	}
}

void d9()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (int i = 0; i <= n; i++) cin >> arr[i], arr[i]--;

	int low = 0,
		high = n;

	int i = 0;
	while (true)
	{
		i++;
		cout << low << " " << high << endl;
		if (low == high) { cout << arr[low] + 1 << endl; break; }
		int cur = (low + high) / 2;
		if (arr[cur] == cur) low = low == cur ? cur + 1 : cur;
		else high = high == cur ? cur - 1 : cur;
	}

	cout << i << " skoðuð" << endl;
}

void d10()
{
	string kt;
	scanf("\n");
	getline(cin, kt);

	int d = 0, m = 0;
	d = d * 10 + (kt[0] - '0');
	d = d * 10 + (kt[1] - '0');
	m = m * 10 + (kt[2] - '0');
	m = m * 10 + (kt[3] - '0');

	int at = m * 32 + d;

	if (at >= 22 + 12 * 32 || at <= 20 + 1 * 32) cout << "Steingeit" << endl;
	else if (at >= 21 + 1 * 32 && at <= 19 + 2 * 32) cout << "Vatnsberi" << endl;
	else if (at >= 20 + 2 * 32 && at <= 20 + 3 * 32) cout << "Fiskur" << endl;
	else if (at >= 21 + 3 * 32 && at <= 20 + 4 * 32) cout << "Hrútur" << endl;
	else if (at >= 21 + 4 * 32 && at <= 21 + 5 * 32) cout << "Naut" << endl;
	else if (at >= 22 + 5 * 32 && at <= 20 + 6 * 32) cout << "Tvíburi" << endl;
	else if (at >= 21 + 6 * 32 && at <= 23 + 7 * 32) cout << "Krabbi" << endl;
	else if (at >= 24 + 7 * 32 && at <= 23 + 8 * 32) cout << "Ljón" << endl;
	else if (at >= 24 + 8 * 32 && at <= 23 + 9 * 32) cout << "Meyja" << endl;
	else if (at >= 24 + 9 * 32 && at <= 22 + 10 * 32) cout << "Vog" << endl;
	else if (at >= 23 + 10 * 32 && at <= 21 + 11 * 32) cout << "Sporðdreki" << endl;
	else if (at >= 22 + 11 * 32 && at <= 21 + 12 * 32) cout << "Bogmaður" << endl;
	else cout << "villa" << endl;

	/*

Vatnsberi (21. janúar - 19. febrúar)
Fiskur (20. febrúar - 20. mars)
Hrútur (21. mars - 20. apríl)
Naut (21. apríl - 21. maí)
Tvíburi (22. maí - 20. júní)
Krabbi (21. júní - 23. júlí)
Ljón (24. júlí - 23. ágúst)
Meyja (24. ágúst - 23. september)
Vog (24. september - 22. október)
Sporðdreki (23. október - 21. nóvember)
Bogmaður (22. nóvember - 21. desember)

	*/
}

void d11()
{
	ifstream ifs("PROBLEMX.DAT");
	int a, b;
	while (ifs >> a >> b) cout << a + b << endl;
}

void d12()
{
	ifstream ifs("keppendur.dat");
	int cnt;
	ifs >> cnt;
	// fscanf(ifs, "\n");
	for (int i = 0; i < cnt; i++)
	{
		string name;
		ifs >> name;
		cout << "Velkomin(n), " << name << ", velkominn í keppnina!" << endl;
	}
}

void d13()
{
	ifstream ifs("texti.txt");
	char c;
	char last = '\n';
	int cnt = 0;
	int l = 1;
	while (ifs.get(c))
	{
		if (c == '\n')
		{
			cout << "lína " << l++ << " = " << cnt << endl;
			cnt = 0;
		}
		else if ((last == ' ' || last == '\n') && c != ' ')
		{
			cnt++;
		}

		last = c;
	}

	if (cnt > 0)
	{
		cout << "lína " << l++ << " = " << cnt << endl;
	}
}

void d14()
{
	int n;
	while (cin >> n)
	{
		if (n == 0) break;

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				if (j == 0 || j == n - 1 || i == 0 || i == n - 1)cout << "* ";
				else cout << "  ";
			}

			cout << endl;
		}
	}
}

class uppNidur
{
public:
	uppNidur(int up, int down, double cur) { Up = up; Down = down; Cur = cur; }
	int Up;
	int Down;
	double Cur;
};

void d15()
{
	ifstream ifs("PROBLEMB.DAT");
	double x;
	while (ifs >> x)
	{
		queue<uppNidur> q;
		q.push(uppNidur(0, 0, 1.0));

		while (true)
		{
			uppNidur cur = q.front();
			q.pop();

			if (abs(cur.Cur - x) < 1E-8)
			{
				// Vitlaust í dæminu, snýröfugt
				cout << "upp = " << cur.Up << ", niður = " << cur.Down << endl;
				break;
			}
			else
			{
				q.push(uppNidur(cur.Up, cur.Down + 1, cur.Cur * 0.8));
				q.push(uppNidur(cur.Up + 1, cur.Down, cur.Cur * 0.9));
			}
		}
	}
}

void d16()
{
	string r;
	cin >> r;
	map<char, int> val;
	val['M'] = 1000;
	val['D'] = 500;
	val['C'] = 100;
	val['L'] = 50;
	val['X'] = 10;
	val['V'] = 5;
	val['I'] = 1;

	int x = 0;
	int last = 0;
	for (int i = size(r) - 1; i >= 0; i--)
	{
		int cur = val[r[i]];
		if (cur < last) x -= cur;
		else x += cur;
		last = cur;
	}

	cout << x << endl;
}

void d17()
{
	string key = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	string m;
	cin >> m;

	map<char, char> encode;
	map<char, char> decode;

	for (int i = 0; i < size(key); i++)
	{
		encode[key[i]] = key[(i + 17) % size(key)];
		decode[key[(i + 17) % size(key)]] = key[i];
	}

	cout << "encoded: ";

	for (int i = 0; i < size(m); i++)
	{
		cout << encode[m[i]];
	}

	cout << endl;
	cout << "decoded: ";

	for (int i = 0; i < size(m); i++)
	{
		cout << decode[m[i]];
	}

	cout << endl;
}

class d18r
{
public:
	d18r(string k, int v)
	{
		Key = k;
		Value = v;
	}

	string Key;
	int Value;
};

bool operator <(d18r left, d18r right)
{
	return left.Value < right.Value;
}

void d18()
{
	int cnt = 7;
	string c[] = { "I", "V", "X", "L", "C", "D", "M" };
	int v[] = { 1, 5, 10, 50, 100, 500, 1000 };

	vector<d18r> vs;
	for (int i = 0; i < cnt; i++)
	{
		vs.push_back(d18r("" + c[i], v[i]));
		for (int j = 0; j < i - (v[i] == 500 || v[i] == 50 || v[i] == 5 ? 0 : 1); j++)
		{
			vs.push_back(d18r(c[j] + "" + c[i], v[i] - v[j]));
		}
	}

	string res = "";
	sort(all(vs));

	int x;
	cin >> x;

	for (int i = size(vs) - 1; i >= 0; i--)
	{
		while (x >= vs[i].Value)
		{
			x -= vs[i].Value;
			res += vs[i].Key;
		}
	}

	cout << res << endl;

/*
M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1
*/
}

int distance(string a, string b)
{
	int cnt = 0;
	for (int i = 0; i < size(a); i++)
	{
		if (a[i] != b[i])
		{
			cnt++;
		}
	}

	return cnt;
}

void d19()
{
	int cnt;
	cin >> cnt;
	string last, cur;
	cin >> last;
	bool all = true;
	for (int i = 1; i < cnt; i++)
	{
		cin >> cur;

		int cnt = 0;
		for (int i = 0; i < size(cur); i++)
		{
			if (cur[i] != last[i])
			{
				cnt++;
			}
		}

		if (cnt != 1)
		{
			all = false;
		}

		last = cur;
	}

	cout << (all ? "keðja" : "ekki keðja") << endl;
}

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n == 2 || n == 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	if (n <= 13) return true;

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0) return false;
		if (n % (i + 2) == 0) return false;
	}

	return true;
}

void d20()
{
	unsigned long long int x;
	cin >> x;

	for (int n = 0; ; n++)
	{
		if (!isPrime(n)) continue;
		unsigned long long int a = pow(2, n) - 1;
		if (a > x || !isPrime(a)) continue;
		unsigned long long int b = pow(2, n - 1);
		if (a * b > x) break;
		cout << a * b << endl;
	}
}

void d21()
{
	int cnt;
	cin >> cnt;
	int* nums = new int[cnt];
	int* sums = new int[cnt];
	int best = -INF;

	for (int i = 0; i < cnt; i++)
	{
		cin >> nums[i];
		if (i == 0) sums[i] = nums[i];
		else sums[i] = sums[i - 1] + nums[i];
	}

	for (int i = 0; i < cnt; i++)
	{
		for (int j = 0; j < i; j++)
		{
			best = max(best, sums[i] - sums[j]);
			best = max(best, sums[i]);
		}
	}

	cout << best << endl;
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
		else if (d == "7") d7();
		else if (d == "8") d8();
		else if (d == "9") d9();
		else if (d == "10") d10();
		else if (d == "11") d11();
		else if (d == "12") d12();
		else if (d == "13") d13();
		else if (d == "14") d14();
		else if (d == "15") d15();
		else if (d == "16") d16();
		else if (d == "17") d17();
		else if (d == "18") d18();
		else if (d == "19") d19();
		else if (d == "20") d20();
		else if (d == "21") d21();

		cout << endl;
	}
}