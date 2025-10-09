#include <iostream>
using namespace std;

double e(int x, int n)
{
    static double s;
    if(n==0){
        return s;
    }
    s=1+x*s/n;//it is s=1+(x/n)*s, but we multiply first in order to get float answer for s
    return e(x,n-1);
}
int main() {
    cout<<e(2,10);
    return 0;
}
