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
#include <string>
#include <cstring>
#include <fstream>
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

vector<int> countSplit(vector<int> left, vector<int> right, int& cnt)
{
	int n = size(left) + size(right);
	vector<int> res;

	int l = 0,
		r = 0;

	while (l + r < n)
	{
		if (l < size(left) && r < size(right))
		{
			if (left[l] < right[r])
			{
				res.push_back(left[l++]);
			}
			else
			{
				cnt += size(left) - l;
				res.push_back(right[r++]);
			}
		}
		else if (l < size(left))
		{
			res.push_back(left[l++]);
		}
		else
		{
			res.push_back(right[r++]);
		}
	}

	return res;
}

vector<int> countInversions(vector<int> arr, int& cnt)
{
	if (size(arr) <= 1)
	{
		return arr;
	}

	vector<int> left, right;
	for (int i = 0; i < size(arr) / 2; i++)
	{
		left.push_back(arr[i]);
	}

	for (int j = size(arr) / 2; j < size(arr); j++)
	{
		right.push_back(arr[j]);
	}

	vector<int> lefts = countInversions(left, cnt),
			    rights = countInversions(right, cnt);

	return countSplit(lefts, rights, cnt);
}

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int cnt;
		cin >> cnt;

		vector<int> arr;
		for (int j = 0; j < cnt; j++)
		{
			int cur;
			cin >> cur;
			arr.push_back(cur);
		}

		int res = 0;
		countInversions(arr, res);
		cout << res << endl;
	}
	return 0;
}