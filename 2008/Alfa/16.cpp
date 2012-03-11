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
	int cost, paid;
	cin >> cost >> paid;

	int left = paid - cost;

	if (left == 0)
	{
		cout << "Enginn afgangur" << endl;
	}
	else
	{
		int n100 = 0,
			n50 = 0,
			n10 = 0,
			n5 = 0,
			n1 = 0;

		n100 = left / 100;
		left %= 100;
		n50 = left / 50;
		left %= 50;
		n10 = left / 10;
		left %= 10;
		n5 = left / 5;
		left %= 5;
		n1 = left;

		if (n100) cout << n100 << "x100" << ", ";
		if (n50) cout << n50 << "x50" << ", ";
		if (n10) cout << n10 << "x10" << ", ";
		if (n5) cout << n5 << "x5" << ", ";
		if (n1) cout << n1 << "x1" << ", ";
	}

	return 0;
}