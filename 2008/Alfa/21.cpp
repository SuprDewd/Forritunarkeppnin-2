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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL

template <class T> int size(T x) { return x.size(); }

int b_search(int* arr, int f, int t, int target)
{
	if (t < f) return -1;
	int middle = (f + t) / 2;
	if (arr[middle] == target) return middle;
	if (f == t) return -1;
	if (target < arr[middle]) return b_search(arr, f, middle - 1, target);
	return b_search(arr, middle + 1, t, target);
}

int main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}

	int target;
	cin >> target;
	int i = b_search(arr, 0, 9, target);

	if (i == -1)
	{
		cout << "Fannst ekki" << endl;
	}
	else
	{
		cout << "Fannst: " << i << endl;
	}

	return 0;
}