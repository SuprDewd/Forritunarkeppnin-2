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

bool isUpperAlpha(char c)
{
	return c >= 'A' && c <= 'Z';
}

bool isDigit(char c)
{
	return c >= '0' && c <= '9';
}

bool isOk(string s)
{
	if (size(s) != 5) return false;
	return isUpperAlpha(s[0]) &&
		   isUpperAlpha(s[1]) &&
		   (isUpperAlpha(s[2]) || isDigit(s[2])) &&
		   isDigit(s[3]) &&
		   isDigit(s[4]);
}

int main()
{
	string s;
	getline(cin, s);
	cout << (isOk(s) ? "Já" : "Nei") << endl;
	return 0;
}