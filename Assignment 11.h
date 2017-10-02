#include <iostream>
using namespace std;

int main()
{
        cout<<"Hello, please enter your first input" << endl;
        int num;
        cin >> num;
        
        if(num < 0)
        {
            cout << "This is not a valid input, please make sure your input is a positive number." << endl;
            cin >> num;
        }
        
        cout <<"Now enter your second input" << endl;
        int nums;
        cin >> nums;
        
        if(nums < 0)
        {
            cout << "This is not a valid input, please make sure your input is a positive number." << endl;
            cin >> nums;
        }
       
    int  gcd;
    
    for(int i = 1; i <= num && i <= nums; i++)
    {
        if(num % i == 0 && nums % i == 0 )
        {
            gcd=i;
        }
    }
    
    cout<<"The Greatest Common Denominator is "<< gcd <<endl;

    return 0;
}



