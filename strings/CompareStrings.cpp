#include <iostream>
using namespace std;

void comparestr(char A[], char B[]){
    int i,j;
    for(i=0, j=0; A[i]!='\0' && B[j]!='\0'; i++, j++){
        if(A[i]!=B[i]){
            break;
        }
    }
    if(A[i]==B[i]){
        cout<<"EQUAL";
    }
    else if(A[i]<B[i]){
        cout<<"SMALLER";
    }
    else{
        cout<<"GREATER";
    }
}

int main() {
    char str1[]="Painter";
    char str2[]="Painting";
    comparestr(str1, str2);
    
    return 0;
}
