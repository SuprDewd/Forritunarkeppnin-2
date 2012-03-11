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
	int n;
	cin >> n;

	bool* used = new bool[10];
	for (int i = 0; i < 10; i++)
	{
		used[i] = false;
	}

	int** arr = new int*[3];
	for (int i = 0; i < 3; i++)
	{
		arr[i] = new int[3];
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = -1;
		}
	}

	for (int i = 0; i < n; i++)
	{
		string s;
		int j;
		cin >> s >> j;
		used[j] = true;
		arr[s[0] - 'A'][s[1] - '1'] = j;
	}

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == -1)
			{
				for (int k = 1; k < 10; k++)
				{
					if (!used[k])
					{
						arr[i][j] = k;
						used[k] = true;
						cout << k << " i " << static_cast<char>(i + 'A') << static_cast<char>(j + '1') << endl;
						break;
					}
				}
			}
		}
	}

	return 0;
}