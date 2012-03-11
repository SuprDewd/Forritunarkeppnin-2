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

bool isPal(string s)
{
	for (int i = 0; i <= (size(s) >> 1); i++)
	{
		if (s[i] != s[size(s) - i - 1]) return false;
	}

	return true;
}

bool isPal(int n)
{
	stringstream ss;
	ss << n;
	string s;
	ss >> s;
	return isPal(s);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << (isPal(a + b) ? "Já" : "Nei") << endl;
	return 0;
}