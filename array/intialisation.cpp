#include <iostream>
using namespace std;

class Array {

private:
    int* A;
    int size;
    int length;

public:
    Array(int size) {
        this->size = size;
        A = new int[size];
        length = 0;
    }

    void create() {
        cout << "Enter number of elements: ";
        cin >> length;

        if (length > size) {
            cout << "Length exceeds array size. Setting length = size."<<endl;
            length = size;
        }

        cout << "Enter the array elements:"<<endl;
        for (int i = 0; i < length; i++) {
            cout << "Array element " << i << " : ";
            cin >> A[i];
        }
    }

    void display() const {
        cout <<endl<< "Array elements are: ";
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    ~Array() {
        delete[] A;
        cout << "Array destroyed" << endl;
    }
};

int main() {
    Array arr1(10);
    arr1.create();
    arr1.display();
    return 0;
}
