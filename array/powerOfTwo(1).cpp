//O(1) time and O(1) space
#include <iostream>
#include <cmath>
using namespace std;

bool isPowerofTwo(int n) {
    if (n <= 0)
        return false;
        int logValue = log2(n);
    
    // Check if log2(n) is an integer by checking if 2^(logn) = n
    return pow(2, logValue) == n;
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
