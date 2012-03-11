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

class ferhyrningur
{
private:
	double lengd, breydd;
public:
	ferhyrningur(double l, double b) { lengd = l; breydd = b; }

	double reiknaflatarmal() { return lengd * breydd; }
	double reiknaummal() { return lengd * 2 + breydd * 2; }
};

int main()
{
	double a, b;
	cin >> a >> b;
	ferhyrningur f(a, b);
	cout << f.reiknaflatarmal() << endl;
	cout << f.reiknaummal() << endl;
	return 0;
}