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
using namespace std;

#define all(o) (o).begin(), (o).end()
#define allr(o) (o).rbegin(), (o).rend()
#define INF 2147483647

template <class T> int size(T x) { return x.size(); }

int main()
{
	int cnt;
	scanf("%d\n", &cnt);
	string* names = new string[cnt];
	for (int i = 0; i < cnt; i++)
	{
		getline(cin, names[i]);
	}

	int* arr = new int[cnt];
	for (int i = 0; i < cnt; i++)
	{
		arr[i] = i;
	}

	for (int i = 1; i < cnt; i++)
	{
		cout << i << ". umferð" << endl;
		for (int j = 0; j < cnt >> 1; j++)
		{
			int a = arr[j],
				b = arr[cnt - j - 1];

			cout << "\t" << names[a] << " - " << names[b] << endl;
		}

		int* arr2 = new int[cnt];
		arr2[0] = arr[0];
		for (int j = 1; j < cnt; j++)
		{
			int to = j + 1;
			if (to == cnt) to = 1;
			arr2[to] = arr[j];
		}

		delete[] arr;
		arr = arr2;
	}

	return 0;
}