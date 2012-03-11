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
	vector<string> jsv;
	jsv.push_back("Stekkjastaur");
	jsv.push_back("Giljagaur");
	jsv.push_back("Stúfur");
	jsv.push_back("Þvörusleikir");
	jsv.push_back("Pottaskefill");
	jsv.push_back("Askasleikir");
	jsv.push_back("Hurðaskellir");
	jsv.push_back("Skyrjarmur");
	jsv.push_back("Bjúgnakrækir");
	jsv.push_back("Gluggagægir");
	jsv.push_back("Gáttaþefur");
	jsv.push_back("Ketkrókur");
	jsv.push_back("Kertasníkir");


	string s;
	cin >> s;

	bool found = false;
	for (int i = 0; i < size(jsv); i++)
	{
		if (s == jsv[i]) // C++ getur ekki borið saman rétt
		{
			found = true;
			if (i == size(jsv) - 1)
			{
				cout << "Þetta er síðasti jólasveinninn" << endl;
			}
			else
			{
				cout << "Næsti jólasveinn er " << jsv[i + 1] << endl;
			}

			break;
		}
	}

	if (!found)
	{
		cout << "Þessi jólasveinn er ekki til" << endl;
	}

	return 0;
}