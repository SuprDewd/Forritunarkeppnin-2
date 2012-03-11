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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int* lesa()
{
	int f;
	cin >> f;
	if (f < 0) return NULL;
	int* arr = new int[5];
	arr[0] = f;
	for (int i = 1; i < 5; i++)
	{
		cin >> arr[i];
	}

	return arr;
}

int main()
{
	cout << "Rettar: ";
	int* rettar = lesa();
	int best = 0;

	while (true)
	{
		cout << "Rod: ";
		int* cur = lesa();
		if (cur == NULL) break;

		int cnt = 0;
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (rettar[j] == cur[i])
				{
					cnt++;
					break;
				}
			}
		}

		best = max(best, cnt);
		delete[] cur;
	}

	cout << best << endl;
	return 0;
}