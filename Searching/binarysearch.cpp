#include <iostream>
using namespace std;

int binsearch(int *arr, int n, int key)
{
    int low = 0;
    int high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

// driver program

int main()
{
    int arr[] = {3, 6, 9, 12, 25, 30, 41, 20, 63};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int result = binsearch(arr, n, key);
    if (result != -1)
    {
        cout << "Element found at index " << result << endl;
    }
    else
    {
        cout << "Element not found in the array" << endl;
    }

    return 0;
}
