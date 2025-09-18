#include <iostream>
using namespace std;
unsigned long long factorial(int n)
{
    // base
    if (n == 0 || n==1)
    {
        return 1;
    }
    // recursion
    return n * factorial(n - 1);
};

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Factorial: " << factorial(n) << endl;
    return 0;
}
