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
	map<pair<string, string>, double> lens;

	ifstream ifs("leidir.txt");
	string a, b;
	double len;
	while (ifs >> a >> b >> len)
	{
		lens[make_pair(a, b)] = len;
		lens[make_pair(b, a)] = len;
	}

	cout << "Leid: ";
	string line;
	getline(cin, line);
	stringstream ss(line);

	string last, cur;
	ss >> last;
	double sum = 0;
	bool all = true;
	while (ss >> cur)
	{
		pair<string, string> curp(last, cur);
		if (lens.find(curp) == lens.end())
		{
			cout << "Vantar gogn fyrir " << last << " -> " << cur << endl;
			all = false;
		}
		else
		{
			sum += lens[curp];
		}

		last = cur;
	}

	if (all)
	{
		cout << "Lengd: " << sum << endl;
	}

	return 0;
}