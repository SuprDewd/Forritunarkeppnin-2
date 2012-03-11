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

int arr[5][5];

pair<int, int> next(int i, int j)
{
	j++;
	while (i < 4)
	{
		while (j < 4)
		{
			if (arr[i][j] == -INF)
			{
				return ii(i, j);
			}

			j++;
		}

		j = 0;
		i++;
	}

	return ii(-INF, -INF);
}

bool check()
{
	for (int i = 0; i < 4; i++)
	{
		int rsum = 0;
		for (int j = 0; j < 4; j++)
		{
			/* code */
		}
	}
}

bool rec(int i, int j)
{
	int a = 0, b = 0, c = 0;
	for (int k = 0; k < 4; k++)
	{
		if (arr[i][k] != -INF) a += arr[i][k];
		if (arr[k][j] != -INF) b += arr[k][j];
		if (arr[k][k] != -INF) c += arr[k][k];
	}

	a = arr[i][4] - a;
	b = arr[4][j] - b;
	c = arr[4][4] - c;

	cout << i << " " << j << " = " << a << ", " << b << ", " << c << endl;
	ii nxt = next(i, j);

	for (int n = 0; n <= min(a, min(b, c)); n++)
	{
		cout << i << " " << j << " " << n << endl;
		arr[i][j] = n;
		if (rec(nxt.first, nxt.second))
		{
			return true;
		}
	}

	arr[i][j] = -INF;
	return false;
}

int main()
{
	cout << "Skra: ";
	string skra;
	cin >> skra;
	ifstream ifs(skra.c_str());

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			string cur;
			ifs >> cur;
			if (cur == "XX") arr[i][j] = -INF;
			else
			{
				arr[i][j] = 0;
				for (int k = 0; k < size(cur); k++)
				{
					arr[i][j] = arr[i][j] * 10 + (cur[k] - '0');
				}
			}
		}
	}

	ii first = next(0, -1);
	bool done = false;
	if (first.first != -INF && first.second != -INF)
	{
		if (!rec(first.first, first.second))
		{
			done = true;
		}
	}

	if (!done)
	{
		cout << "Ekki haegt" << endl;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << arr[i][j] << " ";
			}

			cout << endl;
		}
	}
	else
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				cout << arr[i][j] << " ";
			}

			cout << endl;
		}
	}


	return 0;
}