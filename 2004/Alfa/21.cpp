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

bool cmp(int l, int r)
{
	return l > r;
}

int main()
{
	int cnt;
	cin >> cnt;
	int* arr = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + cnt, cmp);
	set<int> d;
	for (int i = 1; i < cnt; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			d.insert(arr[i]);
		}
	}

	for (set<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		cout << *it << " ";
	}

	cout << endl;

	for (int i = 0; i < cnt; i++)
	{
		if (d.find(arr[i]) == d.end()) cout << arr[i] << " ";
	}

	cout << endl;

	return 0;
}