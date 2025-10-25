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
    cout << endl << "Elements are:" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void SortNegativeAndPositive(Array &arr) 
{
    int i = 0;
    int j = arr.length - 1;

    while (i < j)
    {
        while (arr.A[i] < 0){i++;}
        while (arr.A[j] >= 0){j--;}

        if (i < j)
        {
            int temp = arr.A[i];
            arr.A[i] = arr.A[j];
            arr.A[j] = temp;
        }
    }
}

int main() 
{
    Array arr1 = {{2, -3, 9, -16, 18, -21, 28, -32, 35}, 10, 9};
    SortNegativeAndPositive(arr1);
    Display(arr1);
    return 0;
}
