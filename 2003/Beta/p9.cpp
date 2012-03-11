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

bool isPrime(int n)
{
	if (n <= 1) return false;
	if (n <= 3) return true;
	if (n % 2 == 0 || n % 3 == 0) return false;
	if (n <= 13) return true;

	for (int i = 5; i * i <= n; i += 6)
	{
		if (n % i == 0) return false;
		if (n % (i + 2) == 0) return false;
	}

	return true;
}

int main()
{
	int n;
	cin >> n;
	cout << (isPrime(n) ? "prímtala" : "ekki prímtala") << endl;

	return 0;
}