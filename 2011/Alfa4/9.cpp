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

string toLower(string s)
{
	stringstream ss;
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			ss << static_cast<char>(s[i] - 'A' + 'a');
		}
		else
		{
			ss << s[i];
		}
	}

	return ss.str();
}

int main()
{
	map<string, int> nms;

	cout << "fjoldi: ";
	int cnt;
	cin >> cnt;

	scanf("\n");
	for (int i = 0; i < cnt; i++)
	{
		string name;
		getline(cin, name);
		nms[toLower(name)]++;
	}

	for (map<string, int>::const_iterator it = nms.begin(); it != nms.end(); it++)
	{
		if (it->second > 1)
		{
			cout << it->first << " kemur " << it->second << " sinnum" << endl;
		}
	}

	return 0;
}