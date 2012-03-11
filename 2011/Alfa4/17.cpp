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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

int main()
{
	double start, end;
	cin >> start >> end;

	queue<pair<double, ii> > q;
	q.push(make_pair(start, ii(0, 0)));

	bool found = false;
	while (!q.empty())
	{
		pair<double, ii> cur = q.front();
		q.pop();

		if (cur.second.first + cur.second.second >= 15)
		{
			break;
		}

		if (cur.first == end)
		{
			cout << "innlegg: " << cur.second.first << endl;
			cout << "uttektir: " << cur.second.second << endl;
			found = true;
			break;
		}

		q.push(make_pair(cur.first * 1.2, ii(cur.second.first + 1, cur.second.second)));
		q.push(make_pair(cur.first * 0.9, ii(cur.second.first, cur.second.second + 1)));
	}

	if (!found)
	{
		cout << "Fannst ekki" << endl;
	}

	return 0;
}