#include <iostream>

using namespace std;

void move(int, int[], int[], int[]);
void display(int, int[], int[], int[]);

int main()
{
    cout << "Welcome to Towers of Hanoi, please enter a positive integer between 1 and 100" << endl;
    int num;
    cin >> num;
    
    if(num < 1 || num > 100)
    {
        cout << "This is an invalid input, please try again." << endl;
        cin num;
    }
    
    int begin[num], end[num], aux[num];
    
    for (int i = num; i > 0; i--) {
        start[i] = i;
        end[i] = 0;
        aux[i] = 0;
    }
    

    return 0;
}

void move(int n, int s[n],int e[n],int a[n]) {
    
    a[n] = s[n];
    s[n] = 0;
}

void display(int n, int s[n], int e[n], int a[n]) {
    
    cout << "A: ";
    for (int i = discNum; i > 0; i--) {
        if (i == 0) { cout << "_ "; }
        else { cout << i << " "; }
    }
}

