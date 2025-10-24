#include <iostream>
using namespace std;

class Array {
private:
    int A[10];
    int size;
    int length;

public:
    Array() {
        size = 10;
        length = 0;
    }

    Array(int arr[], int s, int l) {
        size = s;
        length = l;
        for (int i = 0; i < l; i++) {
            A[i] = arr[i];
        }
    }

    void display() const {
        cout << "\nElements are:\n";
        for (int i = 0; i < length; i++)
            cout << A[i] << " ";
        cout << endl;
    }

    void set(int index, int x) {
        if (index >= 0 && index < length)
            A[index] = x;
    }

    int get(int index) const {
        if (index >= 0 && index < length)
            return A[index];
        return -1;
    }

    int max() const {
        int max = A[0];
        for (int i = 1; i < length; i++) {
            if (A[i] > max)
                max = A[i];
        }
        return max;
    }

    int min() const {
        int min = A[0];
        for (int i = 1; i < length; i++) {
            if (A[i] < min)
                min = A[i];
        }
        return min;
    }

    int sum() const {
        int s = 0;
        for (int i = 0; i < length; i++)
            s += A[i];
        return s;
    }

    float avg() const {
        return static_cast<float>(sum()) / length;
    }
};

int main() {
    int data[] = {2, 3, 9, 16, 18, 21, 28, 32, 35};
    Array arr1(data, 10, 9);

    cout << "Sum: " << arr1.sum() << endl;
    cout << "Max: " << arr1.max() << endl;
    cout << "Min: " << arr1.min() << endl;
    cout << "Average: " << arr1.avg() << endl;

    arr1.display();

    return 0;
}
