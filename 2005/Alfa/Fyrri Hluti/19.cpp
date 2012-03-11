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

int main()
{
	string line;
	getline(cin, line);

	bool ok = false;
	for (int i = 0; i < size(line); i++)
	{
		int a = 0, b = 0;
		for (int j = i + 1; j < size(line); j++)
		{
			a++;
			if (line[j] > line[j - 1])
			{
				b++;
			}
			else break;
		}

		if (a == b && a >= 1)
		{
			ok = true;
			break;
		}
	}

	cout << (ok ? "Oddaord" : "Ekki oddaord") << endl;
	return 0;
}