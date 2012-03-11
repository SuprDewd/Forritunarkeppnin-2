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

int main()
{
	char a, b;
	cin >> a >> b;

	bool p = a == 'p' || b == 'p';
	bool s = a == 's' || b == 's';
	bool h = a == 'h' || b == 'h';

	if (a == b) cout << "Jafntefli" << endl;
	else if (p && s) cout << "Pappír þekur stein - pappír vinnur." << endl;
	else if (h && s) cout << "Steinn skemmir hníf - steinn vinnur." << endl;
	else if (h && p) cout << "Hnífur skemmir pappír - hnífur vinnur." << endl;

	return 0;
}