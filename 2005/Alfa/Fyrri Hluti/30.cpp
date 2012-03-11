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
	ifstream ifs("Leidir.txt");
	map<string, vector<string> > leidir;

	string a, b;
	while (ifs >> a >> b)
	{
		leidir[a].push_back(b);
	}

	cout << "Fra: ";
	cin >> a;
	cout << "Til: ";
	cin >> b;

	set<string> visited;
	queue<pair<string, string> > Q;
	Q.push(make_pair(a, a));
	visited.insert(a);

	bool found = false;
	while (!Q.empty())
	{
		pair<string, string> cur = Q.front();
		Q.pop();

		if (cur.first == b)
		{
			cout << cur.second << endl;
			found = true;
			break;
		}

		for (int i = 0; i < size(leidir[cur.first]); i++)
		{
			string nxt = leidir[cur.first][i];
			if (visited.find(nxt) == visited.end())
			{
				visited.insert(nxt);
				Q.push(make_pair(nxt, cur.second + ", " + nxt));
			}
		}
	}

	if (!found)
	{
		cout << "Ekki haegt" << endl;
	}

	return 0;
}