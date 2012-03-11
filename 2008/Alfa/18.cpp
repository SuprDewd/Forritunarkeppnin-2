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

string stafir = "AaÁáBbDdÐðEeÉéFfGgHhIiÍíJjKkLlMmNnOoÓóPpRrSsTtUuÚúVvXxYyÝýÞþÆæÖö";

bool cmp(char a, char b)
{
	return stafir.find(a) < stafir.find(b);
}

int main()
{
	char chars[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> chars[i];
	}

	// Virkar eitthvað skringilega (af því þetta eru ísl. stafir)
	sort(chars, chars + 10, cmp);

	for (int i = 0; i < 10; i++)
	{
		cout << chars[i] << " ";
	}

	cout << endl;

	return 0;
}