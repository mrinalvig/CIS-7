#include <iostream>
#include <limits>
using namespace std;

int main() 
{
	bool loop = true;
	
	while (loop == true)
	{
		int num = -1;
		bool selection = true;

		while (num == -1)
		{
			system("cls");
			cout << "Please select a number and I will tell you if it is even or odd." << endl;
			cin >> num;

			if (num % 2 == 0)
			{
				cout << num << " is an even number. " << endl;
			}
			else if (num % 2 == 1)
			{
				cout << num << " is an odd number. " << endl;
			}
			else if (!(cin >> num))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Invalid input. Try again. " << endl;
				system("pause");
			}
		}

		cout << "Would you like to select another number? If yes, click any key. If not, click 'q' to exit program" << endl;
		char decision;
		cin >> decision;

		if (decision == 'q')
		{
			return 0;
		}
	}
	
	return 0;
}