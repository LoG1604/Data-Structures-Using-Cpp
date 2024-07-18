#include <iostream>
using namespace std;

void display(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int partition(int *arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;  // Start from the element next to pivot
    int j = high;
    int temp;

    while (i <= j) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            // Swap arr[i] and arr[j]
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // Swap arr[low] (pivot) and arr[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;  // Return the partition index
}

void quicksort(int *arr, int low, int high) {
    if (low < high) {
        int partitionindex = partition(arr, low, high);
        quicksort(arr, low, partitionindex - 1);
        quicksort(arr, partitionindex + 1, high);
    }
}

int main() {
    int arr[] = {3, 5, 41, 38, 54, 2};
    int n = 6;
    display(arr, n);
    cout << "Running Quick Sort............." << endl;
    quicksort(arr, 0, n - 1);
    display(arr, n);
    return 0;
}
