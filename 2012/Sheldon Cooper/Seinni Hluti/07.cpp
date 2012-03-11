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
int best;
int* cursettings;
int* board;

void rec(int n)
{
	if (n == settingscnt)
	{
		// cout << n << "/" << endl;
		for (int i = 0; i < 9; i++)
		{
			// cout << "A" << endl;
			int cur = board[i];
			// cout << "B" << endl;
			for (int j = 0; j < settingscnt; j++)
			{
				if (settings[j][i])
				{
					// cout << "C" << endl;
					cur = (cur + cursettings[j]) % 4;
				}
			}

			if (cur != 0) return;
		}

		// cout << "C" << endl;

		int sum = 0;
		for (int i = 0; i < settingscnt; i++)
		{
			sum += cursettings[i];
		}

		// cout << sum << "!" << endl;

		if (sum < best)
		{
			best = sum;
		}
	}
	else
	{
		for (int j = 0; j < 4; j++)
		{
			cursettings[n] = j;
			rec(n + 1);
		}
	}
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> settingscnt;
		settings = new bool*[settingscnt];

		for (int j = 0; j < settingscnt; j++)
		{
			settings[j] = new bool[9];
			for (int k = 0; k < 9; k++)
			{
				int cur;
				cin >> cur;
				settings[j][k] = cur == 1;
			}
		}

		int tests;
		cin >> tests;
		for (int test = 0; test < tests; test++)
		{
			board = new int[9];
			for (int j = 0; j < 9; j++)
			{
				int cur;
				cin >> cur;
				board[j] = (cur % 12) / 3;
			}

			best = INF;
			cursettings = new int[settingscnt];
			memset(cursettings, 0, settingscnt << 2);
			rec(0);

			if (best == INF)
			{
				cout << "NOT POSSIBLE" << endl;
			}
			else
			{
				cout << best << endl;
			}

			delete[] board;
			for (int j = 0; j < settingscnt; j++)
			{
				delete[] settings[j];
			}
			
			delete[] cursettings;
		}

		delete[] settings;
	}

	return 0;
}