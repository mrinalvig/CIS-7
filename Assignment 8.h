#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> prime;
	
	cout << "Please enter a number greater than 0" << endl;
	int num;
	cin >> num;
	
	cout << "How many prime numbers do you think there are between 0 and " << num << "?" << endl;
	int guess;
	cin >> guess;
	
	for(int i = 2; i <= num; i++)
	{
		bool check = true;
		for(int n = 2; n <= i - 1; n++)
		{
			if(i % n == 0)
			{
				check = false;
			}
		}
		if (check)
		{
			prime.push_back(i);
		}
	}
	
	if(guess == prime.size())
	{
		cout << "Correct, there are " << guess << " prime numbers between 0 and " << num << endl;
	}
	else
	{
		cout << "Incorrect! There are " << prime.size() << " prime numbers between 0 and " << num << endl;
	}	
	
	cout << "Here are all the prime numbers" << endl;
	
	for (int i = 0; i < prime.size(); i++)
	{
		cout << prime[i] << endl;
	}
	

	return 0;
}