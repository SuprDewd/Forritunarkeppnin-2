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
#include <time.h>
#include <string>
#include <cstring>
#include <fstream>
#include <locale>
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

template <class T> int size(T x) { return x.size(); }

int main()
{
	locale::global(locale(""));

	while (true)
	{
		string line;
		cin >> line;

		ifstream ifs(line.c_str());

		if (ifs.is_open())
		{
			string s;
			int cnt = 0;
			while (ifs >> s)
			{
				bool any = false;
				for (int i = 0; i < size(s); i++)
				{
					if (s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9' || isalpha(s[i]))
					{
						any = true;
						break;
					}
				}

				if (any) cnt++;
			}

			cout << "ord: " << cnt << endl;
			break;
		}
		else
		{
			cout << "ekki til" << endl;
		}
	}

	return 0;
}