

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

#define round(n) floor((n) + 0.5)

#define isOn(S, j) ((S) & 1 << (j))
#define setBit(S, j) (S |= 1 << (j))
#define clearBit(S, j) (S &= ~(1 << (j)))
#define toggleBit(S, j) (S ^= 1 << (j))
#define lowBit(S) ((S) & -(S))
#define setAll(S, n) (S = (1 << (n)) - 1)

#define INF 2147483647
#define DINF 9223372036854775807LL
#define NPOS string::npos

template <class T> int size(T x) { return x.size(); }

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;

class circle
{
public:
	circle(double _x, double _y, double _radius)
	{
		x = _x;
		y = _y;
		radius = _radius;
	}

	double x, y, radius;

	bool contains(double _x, double _y)
	{
		return sqrt(pow(_x - x, 2.0) + pow(_y - y, 2.0)) <= radius;
	}
};

int main()
{
	srand(time(NULL));

	double curx, cury, curradius;
	double minx, maxx, miny, maxy;
	cin >> curx >> cury >> curradius;
	minx = curx - curradius;
	miny = cury - curradius;
	maxx = curx + curradius;
	maxy = cury + curradius;
	circle A(curx, cury, curradius);
	cin >> curx >> cury >> curradius;
	minx = min(curx - curradius, minx);
	miny = min(cury - curradius, miny);
	maxx = max(curx + curradius, maxx);
	maxy = max(cury + curradius, maxy);
	circle B(curx, cury, curradius);

	bool onlyA = false,
		 onlyB = false,
		 AandB = false;
		
	for (int i = 0; i < 1000000; i++)
	{
		double x, y;
		x = rand() / static_cast<double>(RAND_MAX) * (maxx - minx) + minx;
		y = rand() / static_cast<double>(RAND_MAX) * (maxy - miny) + miny;

		bool a = A.contains(x, y),
			 b = B.contains(x, y);
		
		if (a && !b) onlyA = true;
		else if (b && !a) onlyB = true;
		else if (a && b) AandB = true;
	}

	if (onlyA && !onlyB)
	{
		cout << "A hylur B" << endl;
	}
	else if (onlyB && !onlyA)
	{
		cout << "B hylur A" << endl;
	}
	else if (!onlyA && !onlyB && AandB)
	{
		cout << "A == B" << endl;
	}
	else if (onlyA && onlyB && AandB)
	{
		cout << "A og B skarast" << endl;
	}
	else
	{
		cout << "A og B skarast ekki" << endl;
	}

	return 0;
}