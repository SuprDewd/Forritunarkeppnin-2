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
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

class point
{
public:
	double x;
	double y;
};

class ferh
{
public:
	point a;
	point b;
};

bool between(int a, int b, int c)
{
	return (a >= b && b >= c) || (a <= b && b <= c);
}

bool contains_point(ferh f, point p)
{
	return between(f.a.x, p.x, f.b.x) && between(f.a.y, p.y, f.b.y);
}

bool ferh_covers(ferh a, ferh b)
{
	return contains_point(a, b.a) && contains_point(a, b.b);
}

bool ferh_eq(ferh a, ferh b)
{
	return min(a.a.x, a.b.x) == min(b.a.x, b.b.x) && max(a.a.x, a.b.x) == max(b.a.x, b.b.x) && min(a.a.y, a.b.y) == min(b.a.y, b.b.y) && max(a.a.y, a.b.y) == max(b.a.y, b.b.y);
}

bool ferh_inter(ferh a, ferh b)
{
	// cout << "covers a b " << ferh_covers(a, b) << endl;
	// cout << "covers b a " << ferh_covers(b, a) << endl;
	// cout << "contains a b.a " << contains_point(a, b.a) << endl;
	// cout << "contains a b.b " << contains_point(a, b.b) << endl;
	// cout << "contains b a.a " << contains_point(b, a.a) << endl;
	// cout << "contains b a.b " << contains_point(b, a.b) << endl;
	return !ferh_covers(a, b) && !ferh_covers(b, a) && (contains_point(a, b.a) || contains_point(a, b.b) || contains_point(b, a.a) || contains_point(b, a.b));
}

int main()
{
	double ax1, ay1, ax2, ay2;
	double bx1, by1, bx2, by2;

	cout << "Fyrri hornpunktur fyrir ferh. A" << endl;
	cout << "x hnit: ";
	cin >> ax1;
	cout << "y hnit: ";
	cin >> ay1;

	cout << "Seinni hornpunktur fyrir ferh. A" << endl;
	cout << "x hnit: ";
	cin >> ax2;
	cout << "y hnit: ";
	cin >> ay2;

	cout << "Fyrri hornpunktur fyrir ferh. B" << endl;
	cout << "x hnit: ";
	cin >> bx1;
	cout << "y hnit: ";
	cin >> by1;

	cout << "Seinni hornpunktur fyrir ferh. B" << endl;
	cout << "x hnit: ";
	cin >> bx2;
	cout << "y hnit: ";
	cin >> by2;

	ferh A, B;
	A.a = point();
	A.a.x = ax1;
	A.a.y = ay1;
	A.b = point();
	A.b.x = ax2;
	A.b.y = ay2;

	B.a = point();
	B.a.x = bx1;
	B.a.y = by1;
	B.b = point();
	B.b.x = bx2;
	B.b.y = by2;

	cout << endl;

	if (ferh_eq(A, B))
	{
		cout << "A == B" << endl;
	}
	else if (ferh_covers(A, B))
	{
		cout << "A hylur B" << endl;
	}
	else if (ferh_covers(B, A))
	{
		cout << "B hylur A" << endl;
	}
	else if (ferh_inter(A, B))
	{
		cout << "A og B skarast" << endl;
	}
	else
	{
		cout << "A og B skarast ekki" << endl;
	}

	return 0;
}