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

string abc = "áabcdéefghíijklmnóoprstúuvxýyzþæö";

bool cmp(string a, string b)
{
	for (int i = 0; i < min(size(a), size(b)); i++)
	{
		if (abc.find(a[i]) != abc.find(b[i])) return abc.find(a[i]) < abc.find(b[i]);
	}

	return size(a) < size(b);
}

int main()
{
	ifstream ifs("18.txt");

	vector<string> ss;
	string s;
	while (ifs >> s)
	{
		ss.push_back(s);
	}

	sort(all(ss));

	for (int i = 0; i < size(ss); i++)
	{
		cout << ss[i] << endl;
	}

	return 0;
}