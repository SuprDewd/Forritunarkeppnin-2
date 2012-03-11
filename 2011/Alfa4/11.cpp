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

vi tilr()
{
	vi res;
	for (int i = 1; ; i++)
	{
		cout << "haed " << i << ": ";
		string line;
		cin >> line;
		if (line == "xxx") break;
		if (line == "-") res.push_back(INF);
		else
		{
			for (int j = 0; j < size(line); j++)
			{
				if (line[j] == 'o')
				{
					res.push_back(j);
					break;
				}
			}
		}
	}

	return res;
}

int height(vi arr)
{
	for (int i = size(arr) - 1; i >= 0; i--)
	{
		if (arr[i] != INF)
		{
			return i;
		}
	}

	return -INF;
}

int main()
{
	cout << "Stokkvari 1:" << endl << endl;
	vi a = tilr();
	cout << "Stokkvari 2:" << endl << endl;
	vi b = tilr();

	cout << endl << endl;
	
	if (height(a) == height(b))
	{
		int vinnur = -1;
		for (int i = height(a); i >= 0; i--)
		{
			if (a[i] != b[i])
			{
				vinnur = a[i] < b[i] ? 1 : 2;
				break;
			}
		}

		if (vinnur == -1)
		{
			cout << "Jafntefli" << endl;
		}
		else
		{
			cout << "Stokkvari " << vinnur << " vinnur" << endl;
		}
	}
	else
	{
		cout << "Stokkvari " << (height(a) > height(b) ? "1" : "2") << " vinnur" << endl;
	}

	return 0;
}