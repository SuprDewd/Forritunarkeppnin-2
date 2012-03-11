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
	int tests;
	cin >> tests;

	for (int test = 0; test < tests; test++)
	{
		int ts;
		cin >> ts;
		int board;
		cin >> board;

		for (int t = 0; t < ts; t++)
		{
			int a, b, c, d;
			cin >> a >> b >> c >> d;

			if (a == c && b == d)
			{
				cout << 0 << endl;
			}
			else if ((a + b) % 2 != (c + d) % 2)
			{
				cout << "impossible" << endl;
			}
			else
			{
				int m1 = min(a, c), m2 = min(b, d);
				a -= m1;
				b -= m2;
				c -= m1;
				d -= m2;

				int arr[4];
				arr[0] = a;
				arr[1] = b;
				arr[2] = c;
				arr[3] = d;

				sort(arr, arr + 4);

				if (arr[0] == arr[1] && arr[2] == arr[3])
				{
					cout << 1 << endl;
				}
				else
				{
					cout << 2 << endl;
				}
			}
		}
	}


	return 0;
}