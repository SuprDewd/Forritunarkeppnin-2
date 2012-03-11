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

int ars, tiu, einn;
int bestsum;

int cnt10, cnt1;
int best10, best1;

void rec(int left)
{
	if (left <= 0)
	{
		int cursum = cnt10 * tiu + cnt1 * einn;
		if (cursum < bestsum)
		{
			bestsum = cursum;
			best10 = cnt10;
			best1 = cnt1;
		}
	}
	else
	{
		cnt10++;
		rec(left - 10);
		cnt10--;

		cnt1++;
		rec(left - 1);
		cnt1--;
	}
}

int main()
{
	cout << "Arskort: ";
	cin >> ars;
	cout << "Tiu mida kort: ";
	cin >> tiu;
	cout << "Stakt verd: ";
	cin >> einn;
	cout << "Fjoldi: ";
	int fjoldi;
	cin >> fjoldi;

	bestsum = ars;
	best10 = best1 = cnt10 = cnt1 = 0;

	rec(fjoldi);

	if (bestsum == ars)
	{
		cout << "Best ad kaupa arskort" << endl;
	}
	else
	{
		cout << "Best ad kaupa " << best10 << " tiu mida kort og " << best1 << " stakar ferdir" << endl;
	}

	return 0;
}