#include <iostream>
using namespace std;
// Binary search:-
int binarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    //FOR USER INPUT//
    /*int size, key;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Displaying the given array input: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i];
    }
    cout << "Enter the element you'd like to search: ";
    cin >> key;*/
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int key = 30;
    int index = binarySearch(arr, size, key);
    cout << "Index of the given element is: " << index << endl;
    return 0;
}