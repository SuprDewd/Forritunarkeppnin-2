#include <vector>
#include <string>
using namespace std;

class problem
{
public:
	problem() { }
	problem(string n) { name = n; }

	string name;

	virtual void run() { throw "Not implemented"; }
};

class problem_manager
{
private:
	vector<problem> problems;
public:
	void add(problem p)
	{
		problems.push_back(p);
	}

	void display()
	{
		for (int i = 0; i < problems.size(); i++)
		{
			cout << problems[i].name << endl;
		}
	}
};