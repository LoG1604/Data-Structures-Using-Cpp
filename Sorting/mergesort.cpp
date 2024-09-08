#include <iostream>
using namespace std;

void display(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int *arr, int low, int mid, int high)
{
    int i, j, k;
    int n1 = mid - low + 1;
    int n2 = high - mid;

    // Temporary arrays
    int *L = new int[n1];
    int *R = new int[n2];

    // Copy data to temporary arrays
    for (i = 0; i < n1; i++)
        L[i] = arr[low + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[]
    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = low; // Initial index of merged subarray

    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k++] = L[i++];
        }
        else
        {
            arr[k++] = R[j++];
        }
    }

    // Copy the remaining elements of L[], if any
    while (i < n1)
    {
        arr[k++] = L[i++];
    }

    // Copy the remaining elements of R[], if any
    while (j < n2)
    {
        arr[k++] = R[j++];
    }

    // Free dynamically allocated memory
    delete[] L;
    delete[] R;
}

void mergesort(int* arr, int low, int high)
{
    if (low < high)
    {
        int mid = low + (high - low) / 2;

        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}

// Driver program
int main()
{
    int arr[] = {8, 10, 5, 3, 6, 9, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    display(arr, n);
    cout << "Running mergesort........................." << endl;
    mergesort(arr, 0, n - 1);
    display(arr, n);
    return 0;
}
