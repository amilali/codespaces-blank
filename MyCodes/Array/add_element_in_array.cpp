// add element in array

#include <iostream>
using namespace std;

void insert(int arr[], int index, int value, int& n)
{
    n++;
    int arr2[n];
    int j = 0;
    for (int i = 0; i < n; i++, j++)
    {
        if (i != index)
        {
            arr2[j] = arr[i];
             // Increment j after assigning a value to arr2
        }
        else
        {
            arr2[j] = value;
            j++;
            arr2[j] = arr[i]; // Copy the current value of arr[i] after inserting value
        }
      
    }
    for (int i = 0; i < j; i++)
    {
        arr[i] = arr2[i]; // Copy the updated values back to arr
    }
}


int main()
{
    int arr[12] = { 1, 2, 4, 5, 6, 7, 8 };
    int n = 7;
    int value = 3;
    int index = 7; // position you want to add

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    insert(arr, index, value, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
