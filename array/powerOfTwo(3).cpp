//O(log n) time and O(1) space
#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    if (n <= 0)
        return false;
    
    while (n > 1) {
        if (n % 2 != 0)
            return false;
        n = n / 2;
    }
    return true;
}

int main() {
    int n = 16;
    if (isPowerofTwo(n)) {
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
}
