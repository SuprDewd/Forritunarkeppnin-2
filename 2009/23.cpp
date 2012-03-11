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

void display(bool** arr, int x, int y)
{
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << (arr[j][i] ? 'X' : '-');
		}

		cout << endl;
	}
}

int main()
{
	string pattern, word;
	getline(cin, pattern);
	getline(cin, word);

	bool** match = new bool*[size(pattern)];
	bool** walk = new bool*[size(pattern)];
	for (int i = 0; i < size(pattern); i++)
	{
		match[i] = new bool[size(word)];
		walk[i] = new bool[size(word)];
		memset(walk[i], 0, size(word));
		for (int j = 0; j < size(word); j++)
		{
			match[i][j] = pattern[i] == word[j] || pattern[i] == '*' || pattern[i] == '?';
		}
	}

	if (match[0][0] && (walk[size(pattern) - 1][size(word) - 1] = match[size(pattern) - 1][size(word) - 1]))
	{
		for (int i = size(pattern) - 1; i >= 0; i--)
		{
			for (int j = size(word) - 1; j >= 0; j--)
			{
				if (i == size(pattern) - 1 && j == size(word) - 1) continue;
				if (!match[i][j]) continue;

				walk[i][j] = false;
				if (i + 1 < size(pattern) && j + 1 < size(word)) walk[i][j] = walk[i][j] || walk[i + 1][j + 1];
				if (pattern[i] == '*' && i + 1 < size(pattern)) walk[i][j] = walk[i][j] || walk[i + 1][j];
				if (pattern[i] == '*' && j + 1 < size(word)) walk[i][j] = walk[i][j] || walk[i][j + 1];
				if (i + 1 < size(pattern) && pattern[i + 1] == '*') walk[i][j] = walk[i][j] || walk[i + 1][j];
			}
		}
	}

	// cout << endl;
	// display(match, size(pattern), size(word));
	// cout << endl;
	// display(walk, size(pattern), size(word));
	// cout << endl;

	cout << (walk[0][0] ? "Passar" : "Passar ekki") << endl;

	return 0;
}