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
	ifstream ifs("flug.txt");

	map<string, vector<string> > neigh;
	string a, b;
	while (ifs >> a >> b)
	{
		neigh[a].push_back(b);
		// neigh[b].push_back(a);
	}

	cin >> a >> b;

	map<string, string> parent;
	set<string> visited;

	queue<string> Q;
	Q.push(a);
	visited.insert(a);

	bool found = false;
	while (!Q.empty())
	{
		string cur = Q.front();
		Q.pop();

		if (cur == b)
		{
			found = true;
			break;
		}

		vector<string> n = neigh[cur];
		for (int i = 0; i < size(n); i++)
		{
			if (visited.insert(n[i]).second)
			{
				Q.push(n[i]);
				parent[n[i]] = cur;
			}
		}
	}

	if (found)
	{
		stack<string> S;
		S.push(b);
		while (b != a) b = parent[b], S.push(b);
		bool first = true;
		while (!S.empty())
		{
			if (!first) cout << " -> ";
			else first = false;
			cout << S.top();
			S.pop();
		}

		cout << endl;
	}
	else
	{
		cout << "Ekki mogulegt" << endl;
	}

	return 0;
}