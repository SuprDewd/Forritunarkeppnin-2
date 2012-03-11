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

int main()
{
	int target;
	cin >> target;
	int bestv = INF, best = 0;
	int* brusar = new int[6];
	for (int i = 0; i < 6; i++)
	{
		cin >> brusar[i];
	}

	for (int i = 0; i < 1 << 6; i++)
	{
		int cur = 0;
		for (int j = 0; j < 6; j++)
		{
			if (isOn(i, j))
			{
				cur += brusar[j];
			}
		}

		if (cur >= target && cur < bestv)
		{
			bestv = cur;
			best = i;
		}
	}

	if (bestv == INF)
	{
		cout << "Ekki mogulegt" << endl;
	}
	else
	{
		cout << "Best: " << endl;
		for (int i = 0; i < 6; i++)
		{
			if (isOn(best, i))
			{
				cout << "Brusa af staerd " << brusar[i] << endl;
			}
		}

		cout << "Magn ta: " << bestv << endl;
	}

	return 0;
}