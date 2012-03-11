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

int monlen(int mon)
{
	if (mon == 1) return 31;
	if (mon == 2) return 28;
	if (mon == 3) return 31;
	if (mon == 4) return 30;
	if (mon == 5) return 31;
	if (mon == 6) return 30;
	if (mon == 7) return 31;
	if (mon == 8) return 31;
	if (mon == 9) return 30;
	if (mon == 10) return 31;
	if (mon == 11) return 30;
	if (mon == 12) return 31;
	return -1;
}

int main()
{
	ii merki[] = {
		ii(12 * 12 + 22, 1  * 12 + 20),
		ii(1  * 12 + 21, 2  * 12 + 19),
		ii(2  * 12 + 20, 3  * 12 + 20),
		ii(3  * 12 + 21, 4  * 12 + 20),
		ii(4  * 12 + 21, 5  * 12 + 21),
		ii(5  * 12 + 22, 6  * 12 + 20),
		ii(6  * 12 + 21, 7  * 12 + 23),
		ii(7  * 12 + 24, 8  * 12 + 23),
		ii(8  * 12 + 24, 9  * 12 + 23),
		ii(9  * 12 + 24, 10 * 12 + 22),
		ii(10 * 12 + 23, 11 * 12 + 21),
		ii(11 * 12 + 22, 12 * 12 + 21)
	};

	string merkis[] = {
		"Steingeit",
		"Vatnsberi",
		"Fiskur",
		"Hrutur",
		"Naut",
		"Tviburi",
		"Krabbi",
		"Ljon",
		"Meyja",
		"Vog",
		"Sporddreki",
		"Bogmadur"
	};

	int day, mon;
	cout << "Dagur: ";
	cin >> day;
	cout << "Manudur: ";
	cin >> mon;
	int cnt = 0;

	int curmerki = -1;

	for (int i = 0; i < 12; i++)
	{
		ii cur = merki[i];
		if (mon * 12 + day >= cur.first && mon * 12 + day <= cur.second || (i == 0 && (mon * 12 + day >= cur.first || mon * 12 + day <= cur.second)))
		{
			curmerki = i;
			break;
		}
	}

	cout << curmerki << endl;
	// cout << merkis[curmerki] << endl;

	int nxtmerki = -1;
	while (true)
	{
		cout << day << " " << mon << endl;
		cnt++;
		day++;
		if (day == monlen(mon) + 1)
		{
			mon++;
			day = 1;
			if (mon == 13)
			{
				mon = 1;
			}
		}

		for (int i = 0; i < 12; i++)
		{
			ii cur = merki[i];
			if (mon * 12 + day >= cur.first && mon * 12 + day <= cur.second || (i == 0 && (mon * 12 + day >= cur.first || mon * 12 + day <= cur.second)))
			{
				nxtmerki = i;
				break;
			}
		}

		if (nxtmerki != curmerki) break;
	}

	cout << cnt << " dagar eftir, naest er " << merkis[nxtmerki] << endl;

	return 0;
}