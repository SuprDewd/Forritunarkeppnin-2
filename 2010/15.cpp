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
	int m, n;
	cin >> m >> n;

	char** bo1 = new char*[m];
	char** bo2 = new char*[m];
	for (int i = 0; i < m; i++)
	{
		bo1[i] = new char[n];
		bo2[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			cin >> bo1[i][j];

			if (bo1[i][j] == '*')
			{
				bo2[i][j] = '*';
			}
			else
			{
				bo2[i][j] = '0';
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (bo1[i][j] == '*')
			{
				for (int id = -1; id <= 1; id++)
				{
					for (int jd = -1; jd <= 1; jd++)
					{
						int ci = i + id,
							cj = j + jd;

						if (ci >= 0 && ci < m && cj >= 0 && cj < n && bo2[ci][cj] != '*')
						{
							bo2[ci][cj]++;
						}
					}
				}
			}
		}
	}

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << bo2[i][j];
		}

		cout << endl;
	}

	return 0;
}