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
	map<int, string> tps;

	tps[-1] = "desigromm";
	tps[-2] = "sentigromm";
	tps[-3] = "milligromm";
	tps[-6] = "mikrogromm";
	tps[-9] = "nanogromm";
	tps[-12] = "pikogromm";
	tps[-15] = "femtogromm";
	tps[-18] = "attogromm";
	tps[-21] = "zeptogromm";
	tps[-24] = "yoktogromm";
	tps[1] = "dekagramm";
	tps[2] = "hektogramm";
	tps[3] = "kilogramm";
	tps[6] = "megagramm";
	tps[9] = "gigagramm";
	tps[12] = "teragramm";
	tps[15] = "petagramm";
	tps[18] = "exagramm";
	tps[21] = "zettagramm";
	tps[24] = "yottagramm";

	double bestv = 0;
	int besti = INF;

	cout << "Gromm: ";
	double gromm;
	cin >> gromm;

	for (map<int, string>::const_iterator it = tps.begin(); it != tps.end(); it++)
	{
		double cur = gromm / pow(10.0, it->first);
		if (besti == INF || cur >= 1 && cur < bestv)
		{
			bestv = cur;
			besti = it->first;
		}
	}

	cout << "Tad eru " << bestv << " " <<  tps[besti] << endl;

	return 0;
}