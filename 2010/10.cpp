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
	int r, c;
	cin >> r >> c;
	bool** used = new bool*[r];
	for (int i = 0; i < r; i++)
	{
		used[i] = new bool[c];
		for (int j = 0; j < c; j++)
		{
			used[i][j] = false;
		}
	}

	bool err = false;
	while (true)
	{
		cout << endl;

		if (err)
		{
			cout << "SÆT TEKIÐ" << endl;
			cout << endl;
			err = false;
		}

		for (int i = 0; i < r; i++)
		{
			cout << (i + 1) << ":\t";
			for (int j = 0; j < c; j++)
			{
				cout << static_cast<char>(used[i][j] ? 'X' : ('A' + j)) << " ";
			}

			cout << endl;
		}

		int n;
		char c;
		cin >> n >> c;
		if (used[n - 1][c - 'A']) err = true;
		used[n - 1][c - 'A'] = true;
	}

	return 0;
}