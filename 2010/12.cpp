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

int board[3][3];

void display()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << (board[i][j] == 0 ? '.' : board[i][j] == 1 ? 'O' : 'X');
		}

		cout << endl;
	}
}

string poss[] = {
	"00 01 02",
	"10 11 12",
	"20 21 22",
	"00 10 20",
	"01 11 21",
	"02 12 22",
	"00 11 22",
	"20 11 02",
};

int winning()
{
	for (int i = 0; i < 8; i++)
	{
		stringstream ss(poss[i]);
		string cur;
		int curN = -1;
		bool all = true;
		while (ss >> cur)
		{
			int n = board[cur[0] - '0'][cur[1] - '0'];
			if (curN == -1) curN = n;
			if (n != curN)
			{
				all = false;
			}
		}

		if (all)
		{
			return curN;
		}
	}

	bool any = false;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == 0)
			{
				any = true;
				break;
			}
		}

		if (any) break;
	}

	return any ? 0 : -1;
}

int main()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			board[i][j] = 0;
		}
	}

	bool even = true;
	while (true)
	{
		int w = winning();
		if (w != 0)
		{
			if (w == -1)
			{
				cout << "Jafntefli" << endl;
			}
			else
			{
				cout << "Leikmaður " << w << " vann" << endl;
			}

			break;
		}

		display();
		string s;
		cin >> s;
		int x = s[0] - '1', y = s[1] - 'A';
		if (board[x][y] == 0)
		{
			board[x][y] = even ? 1 : 2;
		}

		even = !even;
	}

	return 0;
}