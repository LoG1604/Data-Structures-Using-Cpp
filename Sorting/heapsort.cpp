#include <iostream>
using namespace std;

void display(int* arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void heapify(int* arr, int n, int i){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2; 

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < n && arr[right] > arr[largest]){
        largest = right; 
    }

    if(largest != i){
        swap(arr[i], arr[largest]); // You can use std::swap for cleaner code

        heapify(arr, n, largest);
    }
}

void heapsort(int* arr, int n){
    cout << "Running heapsort ......................." << endl;

    // Build the heap (rearrange array)
    for(int i = n/2 - 1; i >= 0; i--){
        heapify(arr, n, i);
    }

    // Extract elements one by one from the heap
    for(int i = n - 1; i >= 0; i--){
        // Move current root to end
        swap(arr[0], arr[i]);

        // Call heapify on the reduced heap
        heapify(arr, i, 0);
    }
}

int main(){
    int arr[] = {45, 10, 22, 47, 25, 21, 0};
    int n = 7; 
    display(arr, n);
    heapsort(arr, n);
    display(arr, n);
    return 0;
}
