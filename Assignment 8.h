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
	
	int count = 0;
	
	while (count < num)
	{
		if(count % 2 != 0)
		{
			prime.push_back(count);
		}
		count++;
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
	
	for (int i = 0; i <= prime.size(); i++)
	{
	    auto something = prime.back();
	    prime.pop_back();
		cout << something << endl;
	}
	

	return 0;
}