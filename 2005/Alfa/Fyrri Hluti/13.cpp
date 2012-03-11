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

int hex2int(char c)
{
	if (c >= '0' && c <= '9') return c - '0';
	return c - 'A' + 10;
}

int main()
{
	string line;
	getline(cin, line);

	int r = hex2int(line[0]) * 16 + hex2int(line[1]),
		g = hex2int(line[2]) * 16 + hex2int(line[3]),
		b = hex2int(line[4]) * 16 + hex2int(line[5]);

	if (r == g && g == b)
	{
		cout << "Allir litir eins." << endl;
	}
	else if (r == g && r > b)
	{
		cout << "Raudi og graeni eru eins" << endl;
	}
	else if (r == b && r > g)
	{
		cout << "Raudi og blai eru eins" << endl;
	}
	else if (g == b && g > r)
	{
		cout << "Graeni og blai eru eins" << endl;
	}
	else if (r > g && r > b)
	{
		cout << "Raudi er sterkastur" << endl;
	}
	else if (g > r && g > b)
	{
		cout << "Graeni er sterkastur" << endl;
	}
	else if (b > r && b > g)
	{
		cout << "Blai er sterkastur" << endl;
	}

	return 0;
}