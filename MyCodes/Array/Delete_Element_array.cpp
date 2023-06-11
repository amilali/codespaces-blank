// Delete element in array

#include <iostream>
using namespace std;

void insert(int arr[], int index, int& n)
{
    
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
           i++;
          arr2[j] = arr[i];
        }
      
    }
    for (int i = 0; i <j; i++)
    {
        arr[i] = arr2[i]; // Copy the updated values back to arr
    }
  n=j;
}

// another method

void delete1(int arr[], int x, int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i] == arr[x])
        {
            for(int j=i; j<n; j++)
            {
                arr[j] = arr[j+1];
            }
            i--;
            n--;
        }
    }
}

int main()
{
    int arr[12] = { 1, 2, 4, 5, 6, 7, 8 };
    int n = 7;
    int index = 3;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

   // insert(arr, index, n);
    delete1(arr, index, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
