#include <iostream>
#include <string>
#include <stack>
using namespace std;

int factorial(int);
int fibonacci(int);

stack <string> call;

int main()
{
    bool loop = true;
    
    cout<<"Please select a positive integer" << endl;
    int num;
    cin >> num;
    
    cout << "Would you like to implement a Factorial[1] or Fibonacci[2] method?" << endl;
    int decision;
    cin >> decision;
    
    while(loop == true)
    {
        if (decision == 1)
        {
            cout << "The Factorial of " << num << " = " << factorial(num) << endl;
            
            while(!call.empty()) 
            { 
                cout << call.top() << " "; 
                call.pop(); 
            } 
            
            loop = false;
        }
        else if (decision == 2)
        {
            cout << "The Fibonacci series at the " << num << "the number is: " << fibonacci(num) << endl;
            
            while(!call.empty()) 
            { 
                cout << call.top() << " "; 
                call.pop(); 
            } 
            
            loop = false;
        }
        else
        {
            cout << "This is not an option, please try again" << endl;
            cin >> decision;
        }
    }
    

    return 0;
}

int factorial(int num)
{
    call.push(to_string(num));
    
    int fact = 1;
    
    if (num <= 1)
    {
        return 1;
    }
    else
    {
        fact = num * factorial(num-1);
        return fact;
    }
}

int fibonacci(int num)
{
    call.push(to_string(num));
    
    int result = 1;
    
    if (num <= 2)
    {
      return 1;
    }
    else
    {
        return fibonacci(num-1) + fibonacci(num-2);
    }
    
}