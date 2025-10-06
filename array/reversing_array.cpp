#include <iostream>
using namespace std;
void revArr(int arr[], int size){
  int temp, start, end;
  for(int i=0; i<size/2; i++){
    start=i;
    end=size-i-1;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
  }
}
int main() {
  int my[7]={1,2,3,4,5,6,7};
  revArr(my, 7);//here, my is being passed which is the address of 1st element of the array, so outside main func scope, functions will be able to change the array - my
  for(int i=0; i<7; i++){
    cout<<my[i]<<" ";
  }
  return 0;
}
