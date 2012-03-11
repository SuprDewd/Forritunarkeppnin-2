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

int registers[10];
int memory[1000];

int mystoi(string s)
{
	int res = 0;
	for (int i = 0; i < size(s); i++)
	{
		res = res * 10 + (s[i] - '0');
	}

	return res;
}

int main()
{
	memset(registers, 0, 10 * 4);
	memset(memory, 0, 1000 * 4);

	int i = 0;
	while (true)
	{
		string n;
		cin >> n;
		if (n == "go") break;
		memory[i++] = mystoi(n);
	}

	int pt = 0, cnt = 1;
	while (true)
	{
		int cur = memory[pt],
			a = cur / 100,
			b = (cur / 10) % 10,
			c = cur % 10;

		pt++;

		if (cur == 100) break;
		else if (a == 2) registers[b] = c;
		else if (a == 3) registers[b] = (registers[b] + c) % 1000;
		else if (a == 4) registers[b] = (registers[b] * c) % 1000;
		else if (a == 5) registers[b] = registers[c];
		else if (a == 6) registers[b] = (registers[b] + registers[c]) % 1000;
		else if (a == 7) registers[b] = (registers[b] * registers[c]) % 1000;
		else if (a == 8) registers[c] = memory[registers[b]];
		else if (a == 9) memory[registers[c]] = registers[b];
		else if (a == 0)
		{
			if (registers[c] != 0)
			{
				pt = registers[b];
			}
		}

		cnt++;
	}

	cout << cnt << endl;

	return 0;
}