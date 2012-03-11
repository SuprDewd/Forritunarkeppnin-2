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

int op_prec(string c)
{
	if (c == "x" || c == "/") return 3;
	if (c == "+" || c == "-") return 2;
	return 1;
}

int main()
{
	queue<string> out;
	stack<string> ops;

	string n;
	cin >> n;
	out.push(n);

	string op;
	while (cin >> op && op != "=" && cin >> n)
	{
		while (!ops.empty() && op_prec(op) <= op_prec(ops.top()))
		{
			out.push(ops.top());
			ops.pop();
		}

		ops.push(op);
		out.push(n);
	}

	while (!ops.empty()) out.push(ops.top()), ops.pop();

	stack<double> res;

	while (!out.empty())
	{
		string cur = out.front();
		out.pop();

		if (cur == "+")
		{
			double b = res.top();
			res.pop();
			double a = res.top();
			res.pop();
			res.push(a + b);
		}
		else if (cur == "-")
		{
			double b = res.top();
			res.pop();
			double a = res.top();
			res.pop();
			res.push(a - b);
		}
		else if (cur == "x")
		{
			double b = res.top();
			res.pop();
			double a = res.top();
			res.pop();
			res.push(a * b);
		}
		else if (cur == "/")
		{
			double b = res.top();
			res.pop();
			double a = res.top();
			res.pop();
			res.push(a / b);
		}
		else
		{
			int n = 0;
			for (int i = 0; i < size(cur); i++)
			{
				n = n * 10 + (cur[i] - '0');
			}

			res.push(static_cast<double>(n));
		}
	}

	cout << res.top() << endl;

	return 0;
}