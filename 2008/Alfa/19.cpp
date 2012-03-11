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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL

template <class T> int size(T x) { return x.size(); }

int best = 0;
int cursc = 0;

vector<int> cds;

void rec(int i)
{
	if (i == size(cds))
	{
		if (cursc <= 21 && cursc > best) best = cursc;
	}
	else
	{
		int score = cds[i] <= 9 ? cds[i] : 10;
		cursc += score;
		rec(i + 1);
		cursc -= score;

		if (score == 1)
		{
			cursc += 11;
			rec(i + 1);
			cursc -= 11;
		}
	}
}

int main()
{
	string line;
	getline(cin, line);
	stringstream ss(line);
	int cur, sum = 0;
	while (ss >> cur) cds.push_back(cur), sum += cur;

	rec(0);

	if (sum > 21) cout << "Sprunginn" << endl;
	else cout << best << endl;

	return 0;
}