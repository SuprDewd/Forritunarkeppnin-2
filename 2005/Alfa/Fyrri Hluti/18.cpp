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

string tostr(int n)
{
	if (n < 0) return "mínus " + tostr(-n);
	if (n == 0) return "núll";
	if (n == 1) return "einn";
	if (n == 2) return "tveir";
	if (n == 3) return "þrír";
	if (n == 4) return "fjórir";
	if (n == 5) return "fimm";
	if (n == 6) return "sex";
	if (n == 7) return "sjö";
	if (n == 8) return "átta";
	if (n == 9) return "níu";
	if (n == 10) return "tíu";
	if (n == 11) return "ellefu";
	if (n == 12) return "tólf";
	if (n == 13) return "þrettán";
	if (n == 14) return "fjórtán";
	if (n == 15) return "fimmtán";
	if (n == 16) return "sextán";
	if (n == 17) return "sautján";
	if (n == 18) return "átján";
	if (n == 19) return "nítján";
	if (n == 20) return "tuttugu";
	if (n == 30) return "þrjátíu";
	if (n == 40) return "fjörtíu";
	if (n == 50) return "fimmtíu";
	if (n == 60) return "sextíu";
	if (n == 70) return "sjötíu";
	if (n == 80) return "áttatíu";
	if (n == 90) return "níutíu";
	if (n == 100) return "hundrað";
	return tostr((n / 10) * 10) + " og " + tostr(n % 10);
}

int main()
{
	int n;
	cin >> n;
	cout << tostr(n) << endl;
	return 0;
}