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
	int d, m;
	cin >> d >> m;

	if (m == 12)
	{
		if (11 + 1  == d) cout << "Stekkjastaur" << endl;
		else if (11 + 2  == d) cout << "Giljagaur" << endl;
		else if (11 + 3  == d) cout << "Stúfur" << endl;
		else if (11 + 4  == d) cout << "Þvörusleikir" << endl;
		else if (11 + 5  == d) cout << "Pottaskefill" << endl;
		else if (11 + 6  == d) cout << "Askasleikir" << endl;
		else if (11 + 7  == d) cout << "Hurðaskellir" << endl;
		else if (11 + 8  == d) cout << "Skyrjarmur" << endl;
		else if (11 + 9  == d) cout << "Bjúgnakrækir" << endl;
		else if (11 + 10 == d) cout << "Gluggagægir" << endl;
		else if (11 + 11 == d) cout << "Gáttaþefur" << endl;
		else if (11 + 12 == d) cout << "Ketkrókur" << endl;
		else if (11 + 13 == d) cout << "Kertasníki" << endl;
		else cout << "Enginn" << endl;
	}
	else cout << "Enginn" << endl;

	return 0;
}