

#include <iostream>
using namespace std;

void rightRotate(int A[], int n)
{
    int last = A[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        A[i + 1] = A[i];
    }
 
    A[0] = last;
}

void leftrotate(int A[] , int n)
{
  int first = A[0];
  for(int i=0;i<n-1;i++)
    {
      A[i]=A[i+1];
    }
  A[n-1] = first;
}

int main()
{
  int k=3; // Number of rotations
  int arr[] = {1,2,3,4,5,6,7};
  int size= sizeof(arr)/sizeof(arr[0]);

  for(int i=0; i<k; i++)
    {
      leftrotate(arr, size);
    }

  for(int i=0; i<size; i++)
    {
      cout<<arr[i]<<" ";
    }
  return 0;
}
