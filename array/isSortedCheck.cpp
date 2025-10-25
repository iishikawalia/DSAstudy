#include <iostream>
using namespace std;

struct Array 
{
    int A[10];
    int size;
    int length;
};

void Display(const Array &arr) 
{
    cout << endl<<"Elements are:"<<endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
}

bool isSorted(const Array &arr) 
{
    for (int i = 0; i < arr.length - 1; i++) //checking for elements till length-2 since last index is length-1 and we've nothing to compare frpm there onwards
    {
        if (arr.A[i] > arr.A[i + 1])
            return false;
    }
    return true;
}

int main() 
{
    Array arr1 = {{2, 3, 9, 16, 18, 21, 28, 32, 35}, 10, 9};
    cout << isSorted(arr1);
    Display(arr1);
    return 0;
}
