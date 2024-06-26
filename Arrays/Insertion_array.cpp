#include <iostream>
using namespace std;
// array display function

void display(int*arr,int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// main insertion function

void insertion(int arr[], int size, int element, int capacity, int index){
    if(size>=capacity){
        cout << "Array is full insertion not possible." << endl;
    }
    for(int i=size-1; i>=index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;
}
// Main Program

int main(){
    int arr[100]={7,8,12,55,63};
    int size = 5, element = 74, index = 3;
    display(arr,size);
    insertion(arr, size, element, 100, index);
    size +=1;
    display(arr,size);
    return 0;
}
