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
	int ts;
	cin >> ts;

	for (int i = 0; i < ts; i++)
	{
		int target, a, b, c;
		cin >> target >> a >> b >> c;
		int cnt = 0;
		while (target > 0)
		{
			if (c != 0)
			{
				c--;
				a += 2;
				cnt++;
			}
			else if (b >= 2)
			{
				b -= 2;
				a += 2;
				cnt += 2;
			}
			else if (b > 0)
			{
				b--;
				a -= 3;
				cnt += 4;
			}
			else
			{
				a -= 8;
				cnt += 8;
			}

			target--;
		}

		// cout << a << " " << b << " " << c << endl;

		cout << cnt << endl;
	}

	return 0;
}