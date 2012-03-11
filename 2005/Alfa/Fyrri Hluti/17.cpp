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

int dt(int y, int m, int d)
{
	return (y * 14 + m) * 33 + d;
}

int main()
{
	int d, m, y;
	char c;
	cin >> d >> c >> m >> c >> y;
	int curdt = dt(y, m, d);

	if (curdt == dt(2005, 10, 17)) cout << "Fullt tungl" << endl;
	else if (curdt < dt(2005, 11, 2)) cout << "Minnkandi tungl" << endl;
	else if (curdt == dt(2005, 11, 2)) cout << "Nýtt tungl" << endl;
	else if (curdt < dt(2005, 11, 16)) cout << "Vaxandi tungl" << endl;
	else if (curdt == dt(2005, 11, 16)) cout << "Fullt tungl" << endl;
	else if (curdt < dt(2005, 12, 1)) cout << "Minnkandi tungl" << endl;
	else if (curdt == dt(2005, 12, 1)) cout << "Nýtt tungl" << endl;
	else if (curdt < dt(2005, 12, 15)) cout << "Vaxandi tungl" << endl;
	else if (curdt == dt(2005, 12, 15)) cout << "Fullt tungl" << endl;
	else if (curdt < dt(2005, 12, 31)) cout << "Minnkandi tungl" << endl;
	else if (curdt == dt(2005, 12, 31)) cout << "Nýtt tungl" << endl;

	return 0;
}