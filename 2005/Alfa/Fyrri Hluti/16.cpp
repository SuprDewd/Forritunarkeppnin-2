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
	double n;
	cin >> n;

	bool found = false;
	for (int a = 0; a <= 2; a++)
	{
		for (int b = 0; b <= 2; b++)
		{
			for (int c = 0; c <= 2; c++)
			{
				for (int d = 0; d <= 2; d++)
				{
					double cur = 5 + 1 * a * 2 + 2.5 * b * 2 + 10 * c * 2 + 50 * d * 2;
					if (cur == n)
					{
						if (a > 0) cout << a * 2 << " 1kg lod" << endl;
						if (b > 0) cout << b * 2 << " 2.5kg lod" << endl;
						if (c > 0) cout << c * 2 << " 10kg lod" << endl;
						if (d > 0) cout << d * 2 << " 50kg lod" << endl;
						found = true;
						break;
					}
				}

				if (found) break;
			}

			if (found) break;
		}

		if (found) break;
	}

	if (!found)
	{
		cout << "Ekki haegt" << endl;
	}
	return 0;
}