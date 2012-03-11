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

int main()
{
	string uh;
	cout << "Upphafsstada: ";
	cin >> uh;
	int x, y, dx = 0, dy = 0;
	x = uh[0] - 'A';
	y = uh[1] - '0';
	if (size(uh) == 3)
	{
		y = y * 10 + (uh[2] - '0');
	}

	y--;

	cout << "Hversu oft: ";
	int fjoldi;
	cin >> fjoldi;

	cout << "Stefna: ";
	string stefna;
	cin >> stefna;

	for (int i = 0; i < size(stefna); i++)
	{
		switch (stefna[i])
		{
			case 'u': dy = 1; break;
			case 'n': dy = -1; break;
			case 'h': dx = 1; break;
			case 'v': dx = -1; break;
		}
	}

	for (int i = 0; i < fjoldi; i++)
	{
		if (x == 0 || x == 9)
		{
			dx = -dx;
		}

		if (y == 0 || y == 9)
		{
			dy = -dy;
		}

		x += dx;
		y += dy;

		if (i != 0) cout << ",";
		cout << static_cast<char>(x + 'A') << (y + 1);
	}

	return 0;
}