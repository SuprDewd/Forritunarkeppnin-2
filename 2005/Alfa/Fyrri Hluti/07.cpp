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

bool ok(int a, int b)
{
	return a >= 0 && a < 8 && b >= 0 && b < 8;
}

void printreit(int a, int b)
{
	cout << static_cast<char>(a + 'A') << static_cast<char>(b + '1') << endl;
}

int main()
{
	string s;
	cin >> s;
	int a = s[0] - 'A',
		b = s[1] - '1';

	cout << "Reitir:" << endl;
	if (ok(a + 1, b + 2)) printreit(a + 1, b + 2);
	if (ok(a - 1, b + 2)) printreit(a - 1, b + 2);
	if (ok(a + 1, b - 2)) printreit(a + 1, b - 2);
	if (ok(a - 1, b - 2)) printreit(a - 1, b - 2);
	if (ok(a + 2, b + 1)) printreit(a + 2, b + 1);
	if (ok(a - 2, b + 1)) printreit(a - 2, b + 1);
	if (ok(a + 2, b - 1)) printreit(a + 2, b - 1);
	if (ok(a - 2, b - 1)) printreit(a - 2, b - 1);

	return 0;
}