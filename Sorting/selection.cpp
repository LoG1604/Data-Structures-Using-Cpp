#include <iostream>
using namespace std;

// display function of array

void display(int*arr, int n){
  for(int i=0; i<n; i++){
    cout << arr[i] << " " ;
  }
  cout << endl; 
}

// selection sort function

void selectionsort(int*arr, int n){
  cout << "Running selection sort.................." << endl;
  for(int i=0; i<n-1; i++){
    int min= i;
    for(int j=i+1; j<n; j++){
      if(arr[j] < arr[min])
      min = j;
    }
    int temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }
}

// Driver program

int main(){
  int arr[]={96,45,20,0,8};
  int n=5;
  display(arr,n);
  selectionsort(arr,n);
  display(arr,n);
}