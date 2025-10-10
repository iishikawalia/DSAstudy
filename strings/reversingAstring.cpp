#include <iostream>
using namespace std;
void rev(char str[]){
    char t,l;
    for(l=1; str[l]!='\0';l++){
    }
    l--;
    for(int i=0; i<l;i++){
        t=str[i];
        str[i]=str[l];
        str[l]=t;
        l--;
    }
    cout<<str;
    
}
int main() {
    char A[]="Programming";
    rev(A);
    return 0;
}
