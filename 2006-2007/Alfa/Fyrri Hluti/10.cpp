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

int monlen(int month)
{
	if (month == 1) return 31;
	if (month == 2) return 28;
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
	int n;
	cin >> n;

	int d, m;
	cin >> d >> m;

	int days = d - 1;
	for (int i = 1; i < m; i++) days += monlen(i);

	cout << (days + n - 1) % 7 + 1 << endl;

	return 0;
}