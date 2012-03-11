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

string ein[] = { "núll", "einn", "tveir", "þrír", "fjórir", "fimm", "sex", "sjö", "átta", "níu", "tíu", "ellefu", "tólf", "þrettán", "fjórtan", "fimmtán", "sextán", "sautján", "átján", "nítján" };
string tug[] = { "NULL", "tíu", "tuttugu", "þrjátíu", "fjörtíu", "fimmtíu", "sextíu", "sjötíu", "áttatíu", "níutíu"};
string hun[] = { "eitt", "tvö" };

string ntow(int n)
{
	if (n <= 19) return ein[n];
	else if (n <= 99)
	{
		string res = tug[n / 10];
		if (n % 10 != 0) res = res + " og " + ntow(n % 10);
		return res;
	}
	else
	{
		string res = hun[n / 100 - 1] + " hundruð";

		if (n % 100 != 0)
		{
			string res2 = ntow(n % 100);
			if (n % 100 < 20 || n % 10 == 0) res = res + " og " + res2;
			else res = res + " " + res2;
		}

		return res;
	}
}

int main()
{
	int n;
	cin >> n;
	cout << ntow(n) << endl;
	return 0;
}