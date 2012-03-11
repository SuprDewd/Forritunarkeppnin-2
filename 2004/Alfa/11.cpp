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
#define INF 2147483647

template <class T> int size(T x) { return x.size(); }

class bla
{
public:
	bla(int A, string S) { a = A; s = S; }

	int a;
	string s;
};

bool operator <(bla l, bla r)
{
	return l.a < r.a;
}

int main()
{
	vector<bla> strk;
	vector<bla> stlp;

	for (int i = 0; i < 10; i++)
	{
		string s;
		int n;
		cin >> s >> n;
		strk.push_back(bla(n, s));
	}

	for (int i = 0; i < 10; i++)
	{
		string s;
		int n;
		cin >> s >> n;
		stlp.push_back(bla(n, s));
	}

	sort(all(strk));
	sort(all(stlp));

	for (int i = 0; i < 10; i++)
	{
		cout << strk[i].s << " " << stlp[i].s << endl;
	}

	return 0;
}