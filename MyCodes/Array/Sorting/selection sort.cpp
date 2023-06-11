#include<bits/stdc++.h>
using namespace std;
void selection(int arr[] , int n)
{
  for(int i=0; i<n; i++)
    {
      int min = i;
      for(int j =i+1; j<n; j++)
        {
          if(arr[j]<arr[min])
          {
            min = j;
          }
        }
      swap(arr[i], arr[min]);
    }
}



int main()
{

  int arr[] = {2,1,5,4,3,8};
  int n = sizeof(arr)/sizeof(arr[0]);

  selection(arr,n);

  for(int i=0; i<n; i++)
    {
      cout<<arr[i];
    }
  return 0;
}