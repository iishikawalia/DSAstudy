#include <iostream>
using namespace std;
int fibonacci(int n)
{
    int fib1, fib2;
    // base
    if (n == 0 || n == 1)
    {
        return n;
    }
    // recursion
    fib1 = fibonacci(n - 1);
    fib2 = fibonacci(n - 2);
    return fib1 + fib2;
};

int main()
{
    int n;
    cout << "Enter the number: ";
    cin>>n;
    cout<<"Fibonacci series: "<<endl;
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";
    }
    return 0;
}
