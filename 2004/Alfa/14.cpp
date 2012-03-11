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

double eval(string s)
{
	vector<string> a;
	int last = 0;
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] == '+' || s[i] == '-')
		{
			a.push_back(s.substr(last, i - last));
			a.push_back(s[i] == '+' ? "+" : "-");

			last = i + 1;
		}
	}

	if (last != size(s))
	{
		a.push_back(s.substr(last, size(s) - last));
	}

	if (size(a) != 1)
	{
		double sum = eval(a[0]);
		for (int i = 2; i < size(a); i += 2)
		{
			if (a[i - 1] == "+") sum += eval(a[i]);
			else sum -= eval(a[i]);
		}

		return sum;
	}
	else
	{
		a.clear();
		last = 0;
		for (int i = 0; i < size(s); i++)
		{
			if (s[i] == '*' || s[i] == '/')
			{
				a.push_back(s.substr(last, i - last));
				a.push_back(s[i] == '*' ? "*" : "/");

				last = i + 1;
			}
		}

		if (last != size(s))
		{
			a.push_back(s.substr(last, size(s) - last));
		}

		if (size(a) != 1)
		{
			double mul = eval(a[0]);
			for (int i = 2; i < size(a); i += 2)
			{
				if (a[i - 1] == "*") mul *= eval(a[i]);
				else mul /= eval(a[i]);
			}

			return mul;
		}
		else
		{
			double x;
			stringstream ss(s);
			ss >> x;
			return x;
		}
	}
}

int main()
{
	string s;
	getline(cin, s);
	cout << eval(s) << endl;
	return 0;
}