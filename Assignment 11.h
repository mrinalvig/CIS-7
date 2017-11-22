#include <iostream>
#include <ctime>
using namespace std;

int recursion(int, int);

int main()
{
        cout<<"Hello, please enter your first input" << endl;
        int num1;
        cin >> num1;
        
        if(num1 < 0)
        {
            cout << "This is not a valid input, please make sure your input is a positive number." << endl;
            cin >> num1;
        }
        
        cout <<"Now enter your second input" << endl;
        int num2;
        cin >> num2;
        
        if(num2 < 0)
        {
            cout << "This is not a valid input, please make sure your input is a positive number." << endl;
            cin >> num2;
        }
       
    int  gcd;
    
    clock_t begin;
    begin = clock();
    
    for(int i = 1; i <= num1 && i <= num2; i++)
    {
        if(num1 % i == 0 && num2 % i == 0 )
        {
            gcd=i;
        }
    }
	
    double times;
    times = ((clock() - begin) / (double) CLOCKS_PER_SEC) * 1000000;
    
    cout<<"The Greatest Common Denominator of " << num1 << " and " << num2 << " through iteration is "<< gcd << endl;
    cout << "It took iteration " << (double)times << "ms" << endl;
    
    begin = clock();
    int newGCD = recursion(num1, num2);
    times = ((clock() - begin) / (double) CLOCKS_PER_SEC) * 1000000;
    
    cout<<"The Greatest Common Denominator of " << num1 << " and " << num2 << " through recursion is "<< newGCD << endl;
    cout << "It took recursion " << (double)times << "ms" << endl;

    return 0;
}

int recursion(int a, int b)
{
    if (b != 0)
    {
       return recursion(b, a % b);
    }
    else 
    {
       return a;
    }
}
