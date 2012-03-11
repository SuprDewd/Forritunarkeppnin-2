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

int main()
{
	// 0101993499 = 4
	// Miðað við daginn í dag: 30/12/2011
	string s;
	cin >> s;
	int y = (s[4] - '0') * 10 + (s[5] - '0');
	int a = 2011 - (1900 + y),
		b = 2011 - (2000 + y);

	int years;
	if (a >= 100) years = b;
	else years = a;


	int d = (s[0] - '0') * 10 + (s[1] - '0');
	int m = (s[2] - '0') * 10 + (s[3] - '0');

	if (m != 12 || d > 30)
	{
		years--;
	}

	cout << years << endl;

	return 0;
}