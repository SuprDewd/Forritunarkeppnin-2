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
	int hpr;
	cout << "Hlauparar i ridli: ";
	cin >> hpr;
	cout << "Fjoldi hlaupara: ";
	int cnt;
	cin >> cnt;

	ii* runners = new ii[cnt];
	for (int i = 0; i < cnt; i++)
	{
		int a, b;
		cin >> a >> b;
		runners[i] = make_pair(a * 60 + b, i + 1);
	}

	sort(runners, runners + cnt);

	int rid = 1;
	for (int i = 0; i < cnt; i++)
	{
		if (i % hpr == 0)
		{
			cout << endl << "Ridill " << rid++ << ": " << endl;
		}

		cout << "Hlaupari " << runners[i].second << endl;
	}

	return 0;
}