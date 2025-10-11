#include <iostream>
using namespace std;

void palindrome(char A[]) {
    int i, j;
  
    for (j = 0; A[j] != '\0'; j++); // finding the length of the string
    j--; // j points to the last valid character

    for (i = 0; i < j; i++, j--) {
        if (A[i] != A[j]) {
            cout << "Not a palindrome.";
            return;
        }
    }
    cout << "Palindrome";
}

int main() {
    char str1[] = "madam";
    palindrome(str1);
    return 0;
}
