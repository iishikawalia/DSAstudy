// C++ program to find whether a given number is a power of 2
//When n is a power of 2, it has exactly one bit set to 1. For n-1, all bits to the right of that single set bit will be 1, and the set bit itself will be 0. 
//Taking the NOT of (n-1) flips all these bits, resulting in a number where all bits to the right of the original set bit position will be 0, 
//and all bits to the left (including the bit position itself) will be 1. 
//When we perform n & (~(n-1)), for a power of 2, this operation preserves the original number n because the only set bit in n aligns with a set bit in ~(n-1). 
//For non-powers of 2, this equality doesn't hold.

#include <iostream>
using namespace std;

bool isPowerofTwo(int n) {
    
    // Check if n is positive and n & ~(n-1) equals n
    return (n > 0) && ((n & (~(n-1))) == n);
  //Checks if a given integer is a power of 2 using bitwise AND(&) and NOT(~) operations, since numbers of any data type are internally represented as bits.
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
