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

int main()
{
	int n;
	cin >> n;
	int temp = 0;
	while (n > 9) temp = temp * 10 + (n % 10), n /= 10;
	int temp2 = 0;
	while (temp) temp2 = temp2 * 10 + (temp % 10), temp /= 10;
	temp2 = temp2 * 10 + n;
	cout << temp2 << endl;
	return 0;
}