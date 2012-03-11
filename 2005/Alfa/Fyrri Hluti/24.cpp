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

class node
{
public:
	int data;
	node* next;

	node(int d, node* n)
	{
		data = d;
		next = n;
	}
};

class bidrod
{
private:
	node* head;
	node* tail;
public:
	bidrod()
	{
		head = tail = NULL;
	}

	void baetavid(int n)
	{
		if (head == NULL)
		{
			head = tail = new node(n, NULL);
		}
		else
		{
			tail->next = new node(n, NULL);
			tail = tail->next;
		}
	}

	int takaur()
	{
		int res = head->data;
		head = head->next;
		if (head == NULL) tail = NULL;
		return res;
	}

	bool tomt()
	{
		return head == NULL;
	}
};

int main()
{
	bidrod MinBidrod;
	for (int i = 0; i < 3; i++)
	{
		MinBidrod.baetavid(i + 1);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << MinBidrod.takaur() << endl;
	}
	return 0;
}