#include <iostream>
using namespace std;

void delx(int arr[], int size, int index){
    for(int i=index; i<size; i++){
        arr[i]=arr[i+1];
    }
}

void disp(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int index;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int size=10;
    cout<<"Enter the index of the element to be deleted: ";
    cin>>index;
    int x=arr[index];
    cout<<"Array before deletion:"<<endl;
    disp(arr, size);
    delx(arr, size, index);
    size--;
    cout<<endl<<"Array after deletion:"<<endl;
    disp(arr, size);
    return 0;
}
