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
	ifstream ifs("skra.java");
	string line;

	bool output = false;
	while (getline(ifs, line))
	{
		for (int i = 0; i < size(line); i++)
		{
			if (output)
			{
				if (line[i] == '*' && i + 1 < size(line) && line[i + 1] == '/')
				{
					output = false;
					i++;
					cout << "*/" << endl;
				}
				else
				{
					cout << line[i];
				}
			}
			else
			{
				if (line[i] == '/' && i + 1 < size(line) && line[i + 1] == '/')
				{
					cout << "//";
					for (int j = i + 2; j < size(line); j++)
					{
						cout << line[j];
					}

					cout << endl;
					break;
				}
				else if (line[i] == '/' && i + 1 < size(line) && line[i + 1] == '*')
				{
					cout << "/*";
					output = true;
					i++;
				}
			}
		}

		if (output)
		{
			cout << endl;
		}
	}

	return 0;
}