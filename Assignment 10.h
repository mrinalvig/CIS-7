#include <iostream>
using namespace std;

void factors (int);

int main()
{
    cout << "Please enter a number, and I will display the prime factorization for it: " << endl;
    int num;
    cin >> num;

    factors (num);
   
    return 0;
}

void factors (int num)
{
     cout<<"The prime factors are: " << endl;

    for (int i=2; i <= num; i++)
    {
     while(num % i == 0)
     {
       num /= i;
       cout<< i << " " << endl;
     }
    }
}
