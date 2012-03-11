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
	int* arr = new int[5];
	int cnt = 0;
	int house = 0;
	for (int a = 0; a < 6; a++)
	{
		for (int b = 0; b < 6; b++)
		{
			for (int c = 0; c < 6; c++)
			{
				for (int d = 0; d < 6; d++)
				{
					for (int e = 0; e < 6; e++)
					{
						cnt++;
						arr[0] = a + 1;
						arr[1] = b + 1;
						arr[2] = c + 1;
						arr[3] = d + 1;
						arr[4] = e + 1;

						sort(arr, arr + 5);
						if (arr[0] == arr[1] && arr[3] == arr[4] && (arr[2] == arr[1] || arr[2] == arr[3]) && arr[0] != arr[4])
						{
							house++;

							for (int i = 0; i < 5; i++)
							{
								cout << arr[i] << " ";
							}

							cout << endl;
						}
					}
				}
			}
		}
	}

	cout << house << "/" << cnt << endl;
	cout << static_cast<double>(house) / cnt << endl;
	return 0;
}