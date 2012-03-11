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

bool isleap(int year)
{
	return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
}

int monlen(int year, int month)
{
	if (month == 1) return 31;
	if (month == 2) return isleap(year) ? 29 : 28;
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
}

int main()
{
	string kt;
	getline(cin, kt);

	int d = (kt[0] - '0') * 10 + (kt[1] - '0');
	int m = (kt[2] - '0') * 10 + (kt[3] - '0');
	int y = (kt[4] - '0') * 10 + (kt[5] - '0');
	int o = kt[10] - '0';

	if (y < 1 || y > 12 || d < 1 || d > monlen(y, m))
	{
		cout << "Ologleg kennitala" << endl;
	}
	else
	{
		int ar = o == 0 ? 2000 : 1000 + o * 100;
		ar += y;
		int aldur = 2007 - ar;
		if (m * 35 + d >= 3 * 35 + 10)
		{
			aldur--;
		}

		if (aldur >= 110)
		{
			cout << "Of gamall" << endl;
		}
		else
		{
			cout << aldur << " ara" << endl;
		}
	}

	return 0;
}