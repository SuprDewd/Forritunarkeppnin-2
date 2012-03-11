#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
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
#include <fstream>
#include <locale>
#include <cctype>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()
#define iter(o, it) for (typeof((o).begin()) it = (o).begin(); it != (o).end(); it++)
#define iterr(o, it) for (typeof((o).rbegin()) it = (o).rbegin(); it != (o).rend(); it++)
#define INF 2147483647
template <class T> int size(T x) { return x.size(); }

void P1()
{
	cout << "Hvort viltu" << endl;
	cout << "1. reikna yfirbor�sflatarm�l" << endl;
	cout << "2. reikna rad�us" << endl;
	cout << "Veldu 1 e�a 2: ";
	int n;
	cin >> n;

	if (n == 1)
	{
		cout << "Rad�us k�lunnar?";
		double r;
		cin >> r;
		cout << "Yfirbor�sflatarm�l k�lunnar: " << (r * r * 4 * 3.141592) << endl;
	}
	else if (n == 2)
	{
		cout << "Yfirbor�sflatarm�l k�lunnar: ";
		double y;
		cin >> y;

		cout << "Rad�us k�lunnar: " << (sqrt(y / (4 * 3.141592))) << endl;
	}
}

void P2()
{
	string txt;
	cout << "Texti: ";
	getline(cin, txt);

	int cnt = 0;
	bool lastill = false;
	int len = 0;

	for (int i = 0; i < size(txt); i++)
	{
		if ((txt[i] >= 'a' && txt[i] <= 'z') || (txt[i] >= 'A' && txt[i] <= 'Z') ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�' ||
			txt[i] == '�'
			)
		{
			len++;
		}
		else
		{
			if (len > 0)
			{
				cnt++;
				len = 0;
			}
		}
	}

	if (len > 0) cnt++;

	cout << "� �essum texta eru " << cnt << " or�." << endl;
}

void P3()
{
	cout << "L�gmarksh��: ";
	double lh;
	cin >> lh;
	cout << "H�marksh��: ";
	double hh;
	cin >> hh;
	cout << "�repun � cm: ";
	double step;
	cin >> step;
	step /= 100.0;

	cout << "h��/�yngd ";

	for (double j = lh; j <= hh + 0.0001; j += step)
	{
		cout << "  ";
		cout << setprecision(2) << fixed << j;
	}

	cout << endl;

	for (int i = 60; i <= 125; i += 5)
	{
		cout << i << "\t  ";

		for (double j = lh; j <= hh + 0.0001; j += step)
		{
			cout << " ";
			cout << setprecision(2) << fixed << (i / (j * j));
		}

		cout << endl;
	}
}

int gcd(int a, int b)
{
	if (b == 0) return a;
	return gcd(b, a % b);
}

void P4()
{
	cout << "Fyrri talan: ";
	int a;
	cin >> a;
	cout << "Seinni talan: ";
	int b;
	cin >> b;

	cout << "St�rsti samnefnari er " << gcd(a, b) << endl;
}

int* readIntegers(int cnt)
{
	string line;
	getline(cin, line);
	stringstream ss(line);

	int* ret = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		ss >> ret[i];
		if (ret[i] == -1) return NULL;
	}

	return ret;
}

void P5()
{
	cout << "R�ttar t�lur? ";
	int* correct = readIntegers(5);

	int best = 0;
	while (true)
	{
		cout << "R�� sem notandi �: ";
		int* cur = readIntegers(5);
		if (cur == NULL) break;

		int c = 0;
		for (int i = 0; i < 5; i++)
		{
			bool f = false;
			for (int j = 0; j < 5; j++)
			{
				if (cur[i] == correct[j])
				{
					f = true;
					break;
				}
			}

			if (f) c++;
		}

		best = max(best, c);

		delete[] cur;
	}

	delete[] correct;
	cout << endl << "�a� eru mest " << best << " t�lur � einni r��" << endl;
}

class RegnMan
{
public:
	RegnMan() { }
	RegnMan(int index, int avg) { i = index; a = avg; }

	int i;
	int a;
};

bool operator <(RegnMan l, RegnMan r)
{
	return l.a < r.a;
}

void P6()
{
	RegnMan* mans = new RegnMan[12];
	for (int i = 1; i <= 12; i++)
	{
		cout << "Regn � m�nu�i " << i << "? ";
		int n;
		cin >> n;
		mans[i - 1] = RegnMan(i, n);
	}

	sort(mans, mans + 12);

	map<int, string> mn;
	mn[1] = "jan�ar";
	mn[2] = "febr�ar";
	mn[3] = "mars";
	mn[4] = "apr�l";
	mn[5] = "ma�";
	mn[6] = "j�n�";
	mn[7] = "j�l�";
	mn[8] = "�g�st";
	mn[9] = "september";
	mn[10] = "okt�ber";
	mn[11] = "n�vember";
	mn[12] = "desember";

	for (int i = 0; i < 12; i++)
	{
		cout << "Regn � " << mn[mans[i].i] << " " << mans[i].a << endl;
	}
}

void P7()
{
	map<int, int> f;

	while (true)
	{
		cout << "tala: ";
		int n;
		cin >> n;
		if (n < 0) break;
		f[n]++;
	}

	int best = 0;
	map<int, int>::const_iterator it = f.begin();
	for ( ; it != f.end(); it++)
	{
		best = max(best, it->second);
	}

	it = f.begin();
	for ( ; it != f.end(); it++)
	{
		if (it->second == best)
		{
			cout << "Talan " << it->first << " kemur oftast fyrir � talnar��inni." << endl;
		}
	}
}

class Point
{
public:
	Point() { X = 0; Y = 0; }
	Point(double x, double y) { X = x; Y = y; }

	double X;
	double Y;
};

bool between(double a, double b, double c)
{
	return (a <= b && b <= c) || (c <= b && b <= a);
}

class Square
{
public:
	Square() { A = Point(); B = Point(); }
	Square(Point a, Point b) { A = a; B = b; }

	Point A;
	Point B;

	bool Contains(Point p)
	{
		bool a = A.X <= p.X && B.X >= p.X, // between(A.X, p.X, B.X),
			 b = A.Y >= p.Y && B.Y <= p.Y; // between(A.Y, p.Y, B.Y);
		return a && b;
	}

	bool Contains(Square o)
	{
		bool a = Contains(o.A),
			 b = Contains(o.B);
		return a && b;
	}

	bool Intersects(Square o)
	{
		// TODO: Fix intersection logic
		bool a = Contains(o.A),
			 b = Contains(o.B);
		return a ^ b;
	}
};

bool operator ==(Point l, Point r)
{
	return l.X == r.X && l.Y == r.Y;
}

bool operator ==(Square l, Square r)
{
	return l.A == r.A && l.B == r.B;
}

Point readPoint()
{
	cout << "x hnit: ";
	double x;
	cin >> x;
	cout << "y hnit: ";
	double y;
	cin >> y;
	return Point(x, y);
}

Square readSquare(string name)
{
	cout << "Fyrri hornpunktur fyrir ferhyrning " << name << ":" << endl;
	Point a = readPoint();
	cout << "Seinni hornpunktur fyrir ferhyrning " << name << ":" << endl;
	Point b = readPoint();
	return Square(a, b);
}

void P8()
{
	Square A = readSquare("A");
	Square B = readSquare("B");

	if (A == B)
	{
		cout << "Ferhyrningur A og B eru eins." << endl;
	}
	else if (A.Contains(B))
	{
		cout << "Ferhyrningur A hylur B." << endl;
	}
	else if (B.Contains(A))
	{
		cout << "Ferhyrningur B hylur A." << endl;
	}
	else if (A.Intersects(B))
	{
		cout << "Ferhyrningur A og B skarast saman." << endl;
	}
	else
	{
		cout << "Ferhyrningur A og B skarast ekki saman." << endl;
	}
}

char toLower(char c)
{
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c == '�') return '�';
	if (c >= 'A' && c <= 'Z') return c + ('a' - 'A');
}

string toLower(string s)
{
	string b = "";
	for (int i = 0; i < size(s); i++)
	{
		b += toLower(s[i]);
	}

	return b;
}

void P9()
{
	map<string, int> m;

	int cnt;
	cout << "Hva� eru margir � bekknum: ";
	cin >> cnt;

	for (int i = 0; i < cnt; i++)
	{
		cout << "Nafn: ";
		string nafn;
		cin >> nafn;
		m[toLower(nafn)]++;
	}

	map<string, int>::const_iterator it = m.begin();
	for ( ; it != m.end(); it++)
	{
		if (it->second > 1)
		{
			cout << "�a� eru " << it->second << " " << it->first << " � bekknum." << endl;
		}
	}
}

int readTime()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	return a * 60 + b;
}

void P10()
{
	cout << "Fyrsti t�mapunktur klukkan: ";
	int ft = readTime();
	cout << "Fjarl�g� � fyrsta t�mapunkti: ";
	int ff;
	cin >> ff;
	cout << "Annar t�mapunktur klukkan: ";
	int at = readTime();
	cout << "Fjarl�g� � ��rum t�mapunkti: ";
	int af;
	cin >> af;

	cout << "�ri�ji t�mapunktur klukkan: ";
	int t = readTime();

	cout << "Fjarl�g�in er ��: " << ff + ((af - ff) / static_cast<double>(at - ft) * (at - t)) << endl;
}

vector<int> lesaStokkvara(int i)
{
	cout << "St�kkvari " << i << ": " << endl << endl;

	vector<int> v;
	int k = 0;
	while (true)
	{
		cout << "h�� " << ++k << ": ";
		string s;
		cin >> s;
		if (s == "xxx") break;

		int c = s == "-" ? 0 : size(s);
		v.push_back(c);
	}

	return v;
}

int comparePlayers(vector<int> a, vector<int> b)
{
	if (size(a) != size(b)) return size(a) > size(b) ? 0 : 1;

	for (int i = size(a) - 1; i >= 0; i--)
	{
		if (a[i] == b[i]) continue;
		if (a[i] == 0) return 1;
		if (b[i] == 0) return 0;
		return a[i] < b[i] ? 0 : 1;
	}

	return -1;
}

void P11()
{
	vector<int> a = lesaStokkvara(1);
	vector<int> b = lesaStokkvara(2);

	int v = comparePlayers(a, b);
	if (v == -1) cout << "Jafntefli" << endl;
	else cout << "St�kkvari " << (v + 1) << " vinnur." << endl;
}

bool contains(string s, char c)
{
	for (int i = 0; i < size(s); i++) if (s[i] == c) return true;
	return false;
}

void dxdy(string s, int& dx, int& dy)
{
	dx = 0;
	dy = 0;
	if (contains(s, 'u')) dy = 1;
	if (contains(s, 'n')) dy = -1;
	if (contains(s, 'h')) dx = 1;
	if (contains(s, 'v')) dx = -1;
}

void P12()
{
	char c;
	cout << "Upphafssta�a pe�s: ";
	int x, y;
	cin >> c >> y;
	x = c - 'A' + 1;

	cout << "Hversu oft � pe�i� a� hreyfast: ";
	int n;
	cin >> n;

	cout << "Stefna: ";
	string s;
	cin >> s;

	int dx, dy;
	dxdy(s, dx, dy);

	while (n--)
	{
		x += dx;
		y += dy;

		if (x == 11) { x = 9; dx = -dx; }
		if (x == 0) { x = 2; dx = -dx; }
		if (y == 11) { y = 9; dy = -dy; }
		if (y == 0) { y = 2; dy = -dy; }

		cout << static_cast<char>(x - 1 + 'A') << y;
		if (n != 0) cout << ",";
	}

	cout << endl;
}

void P13()
{
	map<string, int> v;
	v["desigr�mm"] = -1;
	v["sentigr�mm"] = -2;
	v["milligr�mm"] = -3;
	v["m�kr�gr�mm"] = -6;
	v["nan�gr�mm"] = -9;
	v["p�k�gr�mm"] = -12;
	v["femt�gr�mm"] = -15;
	v["att�gr�mm"] = -18;
	v["zept�gr�mm"] = -21;
	v["yokt�gr�mm"] = -24;
	v["dekagr�mm"] = 1;
	v["hekt�gr�mm"] = 2;
	v["k�l�gr�mm"] = 3;
	v["megagr�mm"] = 6;
	v["gigagr�mm"] = 9;
	v["teragr�mm"] = 12;
	v["petagr�mm"] = 15;
	v["exagr�mm"] = 18;
	v["zettagr�mm"] = 21;
	v["yottagr�mm"] = 24;

	string bests = "";
	double bestv = 0;

	cout << "Fj�ldi gramma: ";
	double g;
	cin >> g;

	map<string, int>::const_iterator it = v.begin();
	for ( ; it != v.end(); it++)
	{
		double cur = g * pow(10.0, -it->second);
		if (cur < 1) continue;
		if (bestv == 0 || cur < bestv)
		{
			bestv = cur;
			bests = it->first;
		}
	}

	cout << "�a� eru " << bestv << " " << bests << endl;
}

int b2ToB10(string s)
{
	int n = 0;
	for (int i = 0; i < size(s); i++)
	{
		n *= 2;
		if (s[i] == '1') n++;
	}

	return n;
}

string b10ToB16(int n)
{
	string s = "";
	while (n > 0)
	{
		int cur = n % 16;
		if (cur <= 9) s = static_cast<char>(cur + '0') + s;
		else s = static_cast<char>(cur - 10 + 'A') + s;
		n /= 16;
	}

	return s;
}

void P14()
{
	string s;
	cout << "Binary: ";
	cin >> s;
	cout << "Hexadecimal: " << b10ToB16(b2ToB10(s)) << endl;
}

void P15()
{
	int magn;
	cout << "Magn � l�trum: ";
	cin >> magn;
	int* brusar = new int[6];
	for (int i = 0; i < 6; i++)
	{
		cout << "Br�si " << (i + 1) << ": ";
		cin >> brusar[i];
	}

	int bestsum = INF;
	int bestmask = 0;

	for (int i = 0; i < 1 << 6; i++)
	{
		int sum = 0;
		for (int j = 0; j < 6; j++)
		{
			if (i & 1 << j)
			{
				sum += brusar[j];
			}
		}

		if (sum >= magn)
		{
			if (sum < bestsum)
			{
				bestsum = sum;
				bestmask = i;
			}
		}
	}

	cout << "Best er a� nota" << endl;
	for (int i = 0; i < 6; i++)
	{
		if (bestmask & 1 << i)
		{
			cout << brusar[i] << " l�tra br�sa" << endl;
		}
	}

	cout << "Magn bens�ns ver�ur �� " << bestsum << endl;
}

class Circle
{
public:
	Circle(double x, double y, double r) { P = Point(x, y); R = r; }
	Circle() { P = Point(); R = 0; }

	bool Contains(Point p)
	{
		return sqrt(pow(p.X - P.X, 2) + pow(p.Y - P.Y, 2)) <= R;
	}

	Point P;
	double R;
};

void P16()
{
	cout << "Hringur A:" << endl;
	double ax, ay, ar;
	cout << "X: ";
	cin >> ax;
	cout << "Y: ";
	cin >> ay;
	cout << "Rad�us: ";
	cin >> ar;

	cout << "Hringur B:" << endl;
	double bx, by, br;
	cout << "X: ";
	cin >> bx;
	cout << "Y: ";
	cin >> by;
	cout << "Rad�us: ";
	cin >> br;

	Circle a(ax, ay, ar),
		   b(bx, by, br);

	int maxx = max(ax + ar, bx + br) + 100,
		maxy = max(ay + ar, by + br) + 100;

	int both = 0,
		left = 0,
		right = 0;

	bool leftAlwaysInRight = true,
		 rightAlwaysInLeft = true;

	for (int i = 0; i < 1000000; i++)
	{
		int x = rand() % maxx,
		y = rand() % maxy;

		Point p(x, y);

		bool ina = a.Contains(p),
			inb = b.Contains(p);

		if (ina && !inb) leftAlwaysInRight = false;
		if (inb && !ina) rightAlwaysInLeft = false;

		if (ina && inb) both++;
		else if (ina) left++;
		else if (inb) right++;
	}

	if (both == 0)
	{
		cout << "A og B skarast ekki." << endl;
	}
	else if (leftAlwaysInRight)
	{
		cout << "B umlykur A." << endl;
	}
	else if (rightAlwaysInLeft)
	{
		cout << "A umlykur B." << endl;
	}
	else
	{
		cout << "A og B skarast." << endl;
	}
}

void P17()
{
	cout << "Sta�a � byrjun: ";
	double a, b;
	cin >> a;
	cout << "Sta�a � lok: ";
	cin >> b;

	int i = 0, o = 0;

	while (abs(a - b) > 0.00001)
	{
		if (i + o == 100000) break;
		if (a < b) { i++; a *= 1.2; }
		else { o++; a *= 0.9; }
	}

	if (i + o == 100000)
	{
		cout << "Ekki h�gt" <<endl;
	}
	else
	{
		cout << "Fj�ldi innlagna: " << i << endl;
	cout << "Fj�ldi �ttekta: " << o << endl;
	}
}

void P18()
{
	map<string, double> m;

	while (true)
	{
		cout << "Ver� � v�ru: ";
		double d;
		cin >> d;

		if (d == 0) break;
		cout << "Nafn verslunnar: ";
		string s;
		char c;
		cin >> c;
		getline(cin, s);

		m[c + s] = d;
	}

	double minnsta = INF;

	map<string, double>::const_iterator it = m.begin();
	for ( ; it != m.end(); it++)
	{
		if (it->second < minnsta) minnsta = it->second;
	}

	vector<string> b;

	cout << "L�gsta ver�i� er " << minnsta << " hj�:" << endl;

	it = m.begin();
	for ( ; it != m.end(); it++)
	{
		if (abs(it->second - minnsta) < 0.00001)
		{
			b.push_back(it->first);
		}
	}

	sort(all(b)); // TODO: Fix char

	for (int i = 0; i < size(b); i++)
	{
		cout << b[i] << endl;
	}
}

bool isBinary(int n)
{
	if (n == 0) return true;
	if (n % 10 > 1) return false;
	return isBinary(n / 10);
}

void P20()
{
	cout << "Binary tala: ";
	int n;
	cin >> n;
	cout << (isBinary(n) ? "Talan er binary tala" : "Talan er ekki binary tala") << endl;
}

map<string, int> split(string s)
{
	map<string, int> o;
	string buff = "";
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == ' ' && buff != "")
		{
			o[toLower(buff)]++;
			buff = "";
		}
		else
		{
			buff += s[i];
		}
	}

	if (buff != "")
	{
		o[toLower(buff)]++;
	}

	return o;
}

bool containSame(map<string, int> a, map<string, int> b)
{
	if (size(a) != size(b)) return false;
	map<string, int>::const_iterator it = a.begin();
	for ( ; it != a.end(); it++) if (it->second != b[it->first]) return false;
	return true;
}

void P21()
{
	cout << "Texti 1: ";
	string a, b;
	getline(cin, a);
	cout << "Texti 2: ";
	getline(cin, b);

	cout << (containSame(split(a), split(b)) ? "innihalda s�mu or�" : "innihalda ekki s�mu or�") << endl;
}

int** readArray(int r, int c)
{
	cout << "Sl�i� inn gildi fyrir matrixu: " << endl;
	int** arr = new int*[r];
	for (int i = 0; i < r; i++)
	{
		arr[i] = new int[c];

		for (int j = 0; j < c; j++)
		{
			cout << "r�� " << (i + 1) << ", d�ldur " << (j + 1) << ": ";
			cin >> arr[i][j];
		}
	}

	cout << endl;
	return arr;
}

void P23()
{
	int r, c;
	cout << "Fj�ldi ra�a: ";
	cin >> r;
	cout << "Fj�ldi d�lka: ";
	cin >> c;

	int** a = readArray(r, c);
	int** b = readArray(r, c);

	cout << "Ni�ursta�a: " << endl;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cout << "r�� " << (i + 1) << ", d�ldur " << (j + 1) << ": ";
			cout << a[i][j]  +b[i][j] << endl;
		}
	}
}

int main()
{
	locale::global(locale(""));
	P8();
	system("pause");
	return 0;
}