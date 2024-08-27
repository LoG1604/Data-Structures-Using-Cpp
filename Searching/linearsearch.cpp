#include <iostream>
using namespace std;

void search(int arr[], int n, int x){
    for(int i=0; i<n; i++){
        if(arr[i] == x){
            cout << "You'r Element X : " << x << " found in index at : "  << i << endl;
        }
    }
}

//driver program

int main(){
    int arr[] = {2,5,8,0,6,9,12,30};
    int x = 0;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Running linear searching .................." << endl;
    search(arr, n, x);
    return 0;
}