#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter N: ";
    cin >> n;
    
    long long a = 0;
    long long b = 1;
    long long next;
    
    cout << "Fibonacci: ";
    for(int i = 0; i < n; i++)
    {
        cout << a << ' ';
        next = a + b;
        a = b;
        b = next;
    }
    
    return 0;
}