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

int readTime()
{
	int a, b;
	char c;
	cin >> a >> c >> b;
	return a * 60 + b;
}

int main()
{
	cout << "Fyrsti timi: ";
	int t1 = readTime();
	cout << "Fyrsta fjarlaegd: ";
	double f1;
	cin >> f1;
	cout << "Annar timi: ";
	int t2 = readTime();
	cout << "Onnur fjarlaegd: ";
	double f2;
	cin >> f2;
	cout << "Tridji timi: ";
	int t3 = readTime();

	cout << "Tridja fjarlaegd: ";
	cout << (f2 - f1) / (t2 - t1) * (t3 - t1) + f1 << endl;

	return 0;
}