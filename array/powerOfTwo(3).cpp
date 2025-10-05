//Using Count of Set Bits - O(log n) time and O(1) space
#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    if (n <= 0)
        return false;
    
    // Count set bits
    int count = 0;
    while (n > 0) {
        if (n & 1)
            count++;
        n = n >> 1; //shift n to the right (n = n >> 1) to process the next bit.
    }
    
    // If the count of set bits is 1, then n is a power of 2
    return (count == 1);
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
