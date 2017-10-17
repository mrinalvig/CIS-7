#include <iostream>
#include <vector>
using namespace std;

void movement(int, vector<int>, vector<int>, vector<int>);

int main()
{
	vector<int> startT, endT, auxT;

	cout << "Please enter a positive integer between 1 and 100" << endl;
	int num;
	cin >> num;

	if (num < 1 || num > 100)
	{
		cout << "This is an invalid input, please try again." << endl;
		cin >> num;
	}

	for (int i = num; i > 0; i--)
	{
		startT.push_back(i);
	}

	movement(num, startT, endT, auxT);

	return 0;
}

void movement(int i, vector<int> first, vector<int> second, vector<int> third)
{
	if (i == 1)
	{
		second.push_back(first.back());
		first.pop_back();

		cout << "\nA: ";

		while (first.size() > 0)
		{
			cout << first.back() << " ";
			first.pop_back();
		}

		cout << "\nB: ";
		while (second.size() > 0)
		{
			cout << second.back() << " ";
			second.pop_back();
		}

		cout << "\nC: ";
		while (third.size() > 0)
		{
			cout << third.back() << " ";
			third.pop_back();
		}

		cout << "\n_____________" << endl;
	}
	else
	{
		movement(i - 1, first, third, second);
		second.push_back(first.front());
		first.pop_back();
		movement(i - 1, second, first, third);
	}
}
