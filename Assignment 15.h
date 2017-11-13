#include <iostream>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

void power(vector<string>);
void cross(vector<string>, vector<string>);
void subbing(vector<string>, vector<string>);
void intersection(vector<string>, vector<string>);
void unions(vector<string>, vector<string>);
void print(vector<string>, vector<string>);

int main()
{
    bool loop = true;
    
    vector<string> A;
    A = {"1", "2", "3"};
    
    vector<string> B;
    B = {"2", "3", "4"};
    
    string input;
    
    while(loop == true)
    {
        print(A, B);
        
        cout << "1 : Add Item to A" << endl;
        cout << "2 : Add Item to B" << endl;
        cout << "3 : A U B" << endl;
        cout << "4 : A ^ B" << endl;
        cout << "5 : A - B" << endl;
        cout << "6 : B - A" << endl;
        cout << "7 : A X B" << endl;
        cout << "8 : Powerset of A" << endl;
        cout << "9 : Powerset of B" << endl;
        cout << "0 : QUIT\n" << endl;
             
        char choice;
        cin >> choice;
        
        if(choice == 1)
        {
            cout << "Add Item to A: ";
            cin >> input;
            cout << "\n\n";
            A.push_back(input);
            loop = false;
        }
        else if (choice == 2)
        {
             cout << "Add Item to B: ";
            cin >> input;
            B.push_back(input);
            cout << "\n\n";
            loop = false;
        }
        else if(choice == 3)
        {
            unions(A, B);
            loop = false;
        }
        else if(choice == 4)
        {
            intersection(A, B);
            loop = false;
        }
        else if(choice == 5)
        {
            cout << "A - B: {";
            subbing(A, B);
            cout << "}\n\n";
            loop = false;
        }
        else if(choice == 6)
        {
            cout << "B - A: {";
            subbing(B, A);
            cout << "}\n\n";
            loop = false;
        }
        else if(choice == 7)
        {
            cross(A, B);
            loop = false;
        }
        else if(choice == 8)
        {
            cout << "Powerset of A: {";
            power(A);
            cout << "}\n\n";
            loop = false;
        }
        else if(choice == 9)
        {
            cout << "Powerset of B: {";
            power(B);
            cout << "}\n\n";
            loop = false;
        }
        else if(choice == 0)
        {
            return 0;
            loop = false;
        }
        else
        {
            cout << "Invalid input, try again" << endl;
        }
    }
    
    return 0;
}

void print(vector<string> A, vector<string> B) {
    cout << "Set A = {";
    
    if (A.size() == 0) 
    {
        cout << "" << endl;
    }
    else 
    {
        for(auto element: A)
        {
            cout << "{" << element << "}";
        }
    }
    
    cout << "}\n";
    cout << "Set B = {";
    
    if (B.size() == 0) 
    {
        cout << "";
    }
    else 
    {
        for(auto element: B)
        {
            cout << "{" << element << "}";
        }
    }
    cout << "}\n\n";
}

void unions(vector<string> A, vector<string> B) 
{
    cout << "\nA U B: {";
    for (auto element: A) 
    {
        cout << "{" << element << "}";
    }
    for (auto element: B) 
    {
        cout << "{" << element << "}";
    }
    cout << "}\n\n";
}

void intersection(vector<string> A, vector<string> B) 
{
    cout << "\nA ^ B: {";
    
    for (auto elementA: A) 
    {
        for (auto elementB: B) 
        {
            if (elementA == elementB) 
            {
                cout << "{" << elementA << "}";
            }
        }
    }
    cout << "}\n\n";
}

void subbing(vector<string> A, vector<string> B) 
{
    for (auto elementA: A) 
    {
        bool isEqual = false;
        
        for (auto elementB: B) 
        {
            if (elementA == elementB) 
            {
                isEqual = true;
            }
        }
        
        if (isEqual != true) 
        {
            cout << "{" << elementA << "}";
        }
    }
}

void cross(vector<string> A, vector<string> B) 
{
    cout << "\nA X B: {";
    
    for (auto elementA: A) 
    {
        for (auto elementB: B) 
        {
            cout << "(" << elementA << ",";
            cout << "" << elementB << ")";
        }
    }
    cout << "}\n\n";
}

void power(vector<string> C) 
{
    int n = 0;
    
    for (auto element: C) 
    {
        n++;
    }
    
    unsigned int pow_set_size = pow(2, n);
    
    for (int i = 0; i < pow_set_size; i++) 
    {
        cout << "{";
        
        for (int j = 0; j < n; j++) 
        {
            if (i & (1<<j)) 
            {
                cout << C[j];
            }
        }
        cout << "}";
    }
}