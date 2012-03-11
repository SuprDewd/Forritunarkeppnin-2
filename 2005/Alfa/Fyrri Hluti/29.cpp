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

void mergesort(int* arr, int from, int to)
{
	if (from >= to) return;

	int middle = (from + to) / 2;
	mergesort(arr, from, middle);
	mergesort(arr, middle + 1, to);
	int cnt = to - from + 1;
	int* res = new int[cnt];

	int l = from, r = middle + 1;
	for (int i = 0; i < cnt; i++)
	{
		if (l > middle) res[i] = arr[r++];
		else if (r > to) res[i] = arr[l++];
		else if (arr[l] < arr[r]) res[i] = arr[l++];
		else res[i] = arr[r++];
	}

	for (int i = 0; i < cnt; i++)
	{
		arr[from + i] = res[i];
	}

	delete[] res;
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

	mergesort(arr, 0, cnt - 1);
	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i] << " ";
	}

	cout << endl;
	return 0;
}