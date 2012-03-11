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
	stack<double> num;
	string s;
	getline(cin, s);

	for (int i = 0; i < size(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			num.push(s[i] - '0');
		}
		else if (s[i] == '+')
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a + b);
		}
		else if (s[i] == '-')
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a - b);
		}
		else if (s[i] == '*')
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a * b);
		}
		else if (s[i] == '/')
		{
			double b = num.top();
			num.pop();
			double a = num.top();
			num.pop();
			num.push(a / b);
		}
	}

	cout << num.top() << endl;

	return 0;
}