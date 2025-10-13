#include <iostream>
using namespace std;
void findDuplicates(char A[]){
    int H[26]={0};
    for(int i=0; A[i]!='\0'; i++){
        H[A[i]-97]+=1;
    }
    for(int i=0; i<26; i++){
        if(H[i]>1){
            cout<<char(i+'a')<<" "<<H[i]<<endl;
        }    
    }
}
int main() {
    char str[]="finding";
    findDuplicates(str);
    return 0;
}
