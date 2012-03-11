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

	if (n > 24 || n < 0) cout << "Rangur innsláttur" << endl;
	else if (n >= 19) cout << "Gott kvöld" << endl;
	else if (n >= 9) cout << "Góðan dag" << endl;
	else if (n >= 5) cout << "Þú vaknar snemma" << endl;
	else if (n >= 0) cout << "Þú átt að vera sofandi" << endl;

	return 0;
}