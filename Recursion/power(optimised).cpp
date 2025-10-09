//O(log(n))
#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if(n==0){
        return 1;
    }
    else if(n%2==0){
        return m*pow(m*m, n/2);
    }
    return m*pow(m*m, (n-1)/2);
}
int main() {
    int r=pow(9,3);
    int q=pow(8,6);
    cout<<r<<endl<<q;
    return 0;
}
