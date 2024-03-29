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
	char a, b;
	cin >> a >> b;

	if (a >= 'A' && a <= 'Z') a = a - 'A' + 'a';
	if (b >= 'A' && b <= 'Z') b = b - 'A' + 'a';

	cout << static_cast<char>(min(a, b)) << " kemur á undan" << endl;

	return 0;
}