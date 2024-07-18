#include <iostream>
using namespace std;

void display(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubblesort(int *arr, int n){
    int temp;
    cout << "Running Bubble Sort............." << endl;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(){
    int arr[] = {25,0,58,12,1,36};
    int n = 6;
    display(arr,n);
    bubblesort(arr,n);
    display(arr,n);
    return 0;
}