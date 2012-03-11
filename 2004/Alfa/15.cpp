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

class lln
{
public:
	lln() { value = 0; next = NULL; }
	lln(int n) { value = n; next = NULL; }
	int value;
	lln* next;
};

class ll
{
private:
	lln head;
public:
	ll()
	{
		head = lln(0);
	}

	void add(int n)
	{
		lln* nw = new lln(n);
		lln* cur;
		for (cur = &head; cur->next != NULL; cur = cur->next)
		{

		}

		cur->next = nw;
	}

	void print()
	{
		for (lln* cur = head.next; cur != NULL; cur = cur->next)
		{
			cout << cur->value << endl;
		}
	}
};

int main()
{
	ll l;

	while (true)
	{
		int cur;
		cin >> cur;
		if (cur == -1) break;
		l.add(cur);
	}

	cout << endl;
	l.print();

	return 0;
}