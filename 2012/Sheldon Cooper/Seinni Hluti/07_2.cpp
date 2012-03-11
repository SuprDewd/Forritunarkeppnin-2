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

int settingscnt;
bool** settings;
int* board;
int best;
int* cursettings;

bool rec(int n)
{
	if (n == settingscnt)
	{
		int* curboard = new int[9];

		for (int i = 0; i < 9; i++)
		{
			curboard[i] = board[i];
		}

		for (int i = 0; i < settingscnt; i++)
		{
			for (int j = 0; j < 9; j++)
			{
				if (settings[i][j])
				{
					curboard[j] = (curboard[j] + cursettings[i]) % 4;
				}
			}
		}

		bool ok = true;
		for (int i = 0; i < 9; i++)
		{
			// if (i % 3 == 0) cout << endl;
			// cout << curboard[i] << " ";
			if (curboard[i] != 0)
			{
				ok = false;
				break;
			}
		}

		//cout << endl << endl;

		delete[] curboard;
		if (!ok) return false;

		int cursum = 0;
		for (int i = 0; i < settingscnt; i++)
		{
			cursum += cursettings[i];
		}

		if (cursum < best)
		{
			best = cursum;
		}

		return true;
	}
	else
	{
		bool any = false;
		for (int i = 0; i < 4; i++)
		{
			cursettings[n] = i;
			any = rec(n + 1) || any;
		}

		return any;
	}
}

int main()
{
	int tests;
	cin >> tests;

	for (int test = 0; test < tests; test++)
	{
		cin >> settingscnt;
		settings = new bool*[settingscnt];
		for (int i = 0; i < settingscnt; i++)
		{
			settings[i] = new bool[9];
			
			for (int j = 0; j < 9; j++)
			{
				int cur;
				cin >> cur;
				settings[i][j] = cur == 1;
			}
		}

		int subtests;
		cin >> subtests;
		for (int subtest = 0; subtest < subtests; subtest++)
		{
			board = new int[9];
			cursettings = new int[settingscnt];
			for (int i = 0; i < settingscnt; i++)
			{
				cursettings[i] = 0;
			}

			for (int i = 0; i < 9; i++)
			{
				cin >> board[i];
				board[i] %= 12;
				board[i] /= 3;
			}

			best = INF;
			if (rec(0))
			{
				cout << best << endl;
			}
			else
			{
				cout << "NOT POSSIBLE" << endl;
			}

			delete[] board;
			delete[] cursettings;
		}

		for (int i = 0; i < settingscnt; i++)
		{
			delete[] settings[i];
		}

		delete[] settings;
	}

	return 0;
}