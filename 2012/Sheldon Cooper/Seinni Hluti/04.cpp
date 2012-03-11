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

char* cntc(string s)
{
	char* arr = new char['z' - 'a' + 1];
	memset(arr, 0, 'z' - 'a' + 1);
	for (int i = 0; i < size(s); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			arr[s[i] - 'a']++;
		}
	}

	return arr;
}

bool same(char* a, char* b)
{
	for (int i = 0; i < 'z' - 'a' + 1; i++)
	{
		if (a[i] != b[i]) return false;
	}

	return true;
}

int main()
{
	int Ts;
	cin >> Ts;

	for (int t = 0; t < Ts; t++)
	{
		int cnt;
		cin >> cnt;
		scanf("\n");
		string target;
		getline(cin, target);
		char* trgt = cntc(target);

		for (int i = 0; i < cnt; i++)
		{
			string cur;
			getline(cin, cur);
			char* arr = cntc(cur);
			if (same(arr, trgt))
			{
				cout << "Yes" << endl;
			}
			else
			{
				cout << "No" << endl;
			}
			
			delete[] arr;
		}

		delete[] trgt;
	}

	return 0;
}