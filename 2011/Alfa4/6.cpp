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
	vii mon;

	for (int i = 0; i < 12; i++)
	{
		cout << "Regn " << (i + 1) << ": ";
		int r;
		cin >> r;
		mon.push_back(ii(r, i));
	}

	sort(all(mon));

	cout << endl;
	string nms[] = { "januar", "februar", "mars", "april", "mai", "juni", "juli", "agust"," september", "oktober", "november", "desember" };
	for (int i = 0; i < size(mon); i++)
	{
		ii cur = mon[i];
		cout << "Regn i " << nms[cur.second] << " = " << cur.first << endl;
	}

	return 0;
}