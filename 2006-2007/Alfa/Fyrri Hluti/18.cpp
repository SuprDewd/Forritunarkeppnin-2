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
	int cnt;
	cin >> cnt;

	string* arr = new string[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + cnt);

	bool ok = false;

	do
	{
		bool all = true;
		for (int i = 1; i < cnt; i++)
		{
			string last = arr[i - 1],
				   cur = arr[i];

			if (last[size(last) - 1] != cur[0])
			{
				all = false;
				break;
			}
		}

		if (all)
		{
			ok = true;
			break;
		}
	} while (next_permutation(arr, arr + cnt));

	cout << (ok ? "haegt" : "ekki haegt") << endl;
	return 0;
}