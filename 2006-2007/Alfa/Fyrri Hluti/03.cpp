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
	int n;
	cout << "Fjoldi: ";
	cin >> n;

	map<string, string> m;

	for (int i = 0; i < n; i++)
	{
		string a, b;
		cin >> a >> b;
		m[a] = b;
		m[b] = a;
	}

	cout << "Ord: ";
	string c;
	cin >> c;

	if (m.find(c) == m.end())
	{
		cout << "Ekki hluti af pari" << endl;
	}
	else
	{
		cout << "Hitt: " << m[c] << endl;
	}

	return 0;
}