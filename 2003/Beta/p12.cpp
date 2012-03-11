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

bool isLegal(string s)
{
	if (size(s) != 5) return false;
	if (s[0] < 'A' || s[0] > 'Z') return false;
	if (s[1] < 'A' || s[1] > 'Z') return false;
	if (s[2] < '0' || s[2] > '9') return false;
	if (s[3] < '0' || s[3] > '9') return false;
	if (s[4] < '0' || s[4] > '9') return false;
	return true;
}

int main()
{
	string s;
	cin >> s;
	cout << (isLegal(s) ? "löglegt" : "ekki löglegt") << endl;
	return 0;
}