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

struct per
{
	string name;
	int n;
};

bool cmp(per l, per r)
{
	if (l.name != r.name) return l.name < r.name;
	return l.n < r.n;
	
}

int main()
{
	int cnt;
	cin >> cnt;

	per* arr = new per[cnt];

	for (int i = 0; i < cnt; i++)
	{
		cin >> arr[i].name >> arr[i].n;
	}

	sort(arr, arr + cnt, cmp);

	cout << endl;
	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i].name << " " << arr[i].n << endl;
	}
	return 0;
}