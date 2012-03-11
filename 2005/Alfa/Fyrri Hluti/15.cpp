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

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

bool leap_year(int year)
{
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int month_len(int year, int month)
{
	if (month == 1) return 31;
	if (month == 2) return leap_year(year) ? 29 : 28;
	if (month == 3) return 31;
	if (month == 4) return 30;
	if (month == 5) return 31;
	if (month == 6) return 30;
	if (month == 7) return 31;
	if (month == 8) return 31;
	if (month == 9) return 30;
	if (month == 10) return 31;
	if (month == 11) return 30;
	if (month == 12) return 31;
	throw "";
}

int main()
{
	int d, m, y;
	char c;
	cin >> d >> c >> m >> c >> y;

	if (d > month_len(y, m))
	{
		cout << "Dagur ekki til" << endl;
	}
	else
	{
		d++;
		if (d == month_len(y, m) + 1)
		{
			d = 1;
			m++;
			if (m == 13)
			{
				m = 1;
				y++;
			}
		}

		cout << d << "." << m << "." << y << endl;
	}

	return 0;
}