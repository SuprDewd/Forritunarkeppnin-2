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
	int cnt;
	cin >> cnt;

	int arr[3];
	int rs[3];
	for (int i = 0; i < 3; i++)
	{
		cin >> rs[i];
		rs[i]++;
		arr[i] = 0;
	}

	int best = INF;
	int bes[3];

	bool any = false;
	while (true)
	{
		int cur = 60 * arr[0] + 30 * arr[1] + 20 * arr[2];

		if (cur >= cnt && cur < best)
		{
			best = cur;
			for (int i = 0; i < 3; i++)
			{
				bes[i] = arr[i];
			}

			any = true;
		}

		int carry = 1;
		for (int i = 0; i < 3; i++)
		{
			int cr = arr[i] + carry;
			arr[i] = cr % rs[i];
			carry = cr / rs[i];
		}

		if (carry > 0) break;
	}

	if (!any)
	{
		cout << "Ekkert fannst" << endl;
	}
	else
	{
		if (bes[0] > 0) cout << "Fjoldi 60 = " << bes[0] << endl;
		if (bes[1] > 0) cout << "Fjoldi 30 = " << bes[1] << endl;
		if (bes[2] > 0) cout << "Fjoldi 20 = " << bes[2] << endl;
	}

	return 0;
}