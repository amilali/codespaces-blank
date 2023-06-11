#include<bits/stdc++.h>
using namespace std;

void insertion(int arr[] , int n)
{
  for(int i=1; i<n; i++)
    {
      int j = i-1;
      int temp = arr[i];

      while(j>=0 && arr[j] >= temp)
        {
          arr[j+1] = arr[j];
          j = j-1;
        }
      arr[j+1] = temp;
    }

  for(int i=0; i<n; i++)
    {
      cout<<arr[i];
    }
}

int main()
{
  int arr[] ={1,3,1,2,6,3};
  int n = sizeof(arr)/sizeof(arr[0]);

  insertion(arr,n);
  return 0;
}