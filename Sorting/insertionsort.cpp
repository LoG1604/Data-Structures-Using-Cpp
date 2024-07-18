#include <iostream>
using namespace std;

void display(int *arr, int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionsort(int *arr, int n){
    cout << "Running Insertion sort" << endl;
    int key, j;
    for(int i=1; i<n; i++){
        key = arr[i];
        j = i-1;

        while(j>=0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {11,55,69,72,2,24};
    int n = 6;
    display(arr,n);
    insertionsort(arr,n);
    display(arr,n);
    return 0;
}