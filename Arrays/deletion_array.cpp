#include <iostream>
using namespace std;
//display function for array

void display (int* arr,int size){
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
// deletion function

void deletion(int arr[], int size, int index){
    for(int i=index; i<size-1; i++){
        arr[i] = arr[i+1];
    }
}
// main program

int main(){
int arr[100] = {5,6,69,20,36};
int size = 5, index = 3;
display (arr,size);
deletion(arr,size,index);
size -=1;
display(arr , size);
return 0;
}