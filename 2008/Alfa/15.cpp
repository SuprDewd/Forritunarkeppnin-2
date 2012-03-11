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

int main()
{
	int h, m, len;
	string d;
	cin >> h >> m >> len >> d;
	int t = h * 60 + m;

	int ks = 0;
	if (d == "Fd" && t >= (18 * 60 + 30) || d == "Md" && t <= (8 * 60 + 0)) ks = 10;
	else if (d != "Ld" && d != "Sd" && t >= (8 * 60 + 0) && t <= (18 * 60 + 30)) ks = 30;
	else if (d != "Ld" && d != "Sd" && (t >= (18 * 60 + 30) || t <= (8 * 60 + 0))) ks = 20;
	else ks = 10;

	cout << ks * len << endl;

	return 0;
}