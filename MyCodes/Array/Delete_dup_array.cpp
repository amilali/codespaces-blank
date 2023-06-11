#include<bits/stdc++.h>
using namespace std;
void remove_dup(int arr[], int n)
{ 
  int index =0;

  sort(arr, arr+n);
  
  for(int i=0; i<n; i++)
    {
      if(arr[i] != arr[i+1])
      {
        arr[index++] = arr[i];
      }
      arr[index] = arr[n-1];
    }

  for(int i=0; i<index; i++)
    {
      cout<<arr[i]<<" ";
    }
}

/*
void d_a(int arr[], int &n)
{
  int index=0;
  for(int i=0; i<n; i++)
    {
      if(arr[i] != arr[i+1])
      {
        arr[index++] = arr[i];
      }
    }
  n=index;
}
*/

int main()
{
  int arr[] = {1,2,3,4,1,6,6,5};
  int size = sizeof(arr)/sizeof(arr[0]);

  remove_dup(arr, size);
  
  return 0;
}