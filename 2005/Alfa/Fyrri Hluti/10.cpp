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

int main()
{
	int D, F, R;
	cout << "D: ";
	cin >> D;
	cout << "F: ";
	cin >> F;
	cout << "R: ";
	cin >> R;

	int arr[3];
	memset(arr, 0, 4 * 3);

	vii v;
	for (int i = 0; i < 15; i++)
	{
		v.push_back(ii(D / (i + 1), 0));
		v.push_back(ii(F / (i + 1), 1));
		v.push_back(ii(R / (i + 1), 2));
	}

	sort(all(v));

	for (int i = 0; i < 15; i++)
	{
		arr[v[size(v) - i - 1].second]++;
	}

	cout << endl;
	cout << "D listi fær " << arr[0] << " fulltrúi" << endl;
	cout << "F listi fær " << arr[1] << " fulltrúi" << endl;
	cout << "R listi fær " << arr[2] << " fulltrúi" << endl;

	return 0;
}