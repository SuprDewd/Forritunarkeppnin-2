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

#define NMAX 20

class stafli
{
private:
	int arr[NMAX];
	int cnt;
public:
	stafli() { cnt = 0; }
	bool empty() { return cnt == 0; }
	void push(int n)
	{
		arr[cnt++] = n;
	}

	int pop()
	{
		return arr[--cnt];
	}

	int peek()
	{
		return arr[cnt - 1];
	}
};

int main()
{
	stafli s;

	s.push(1);
	s.push(2);
	s.push(3);

	while (!s.empty()) cout << s.pop() << endl;

	return 0;
}