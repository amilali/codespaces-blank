#include<bits/stdc++.h>

using namespace std;

int main()
{
    int arr[]  = {2,1,0,1,0,2};
    int n = sizeof(arr)/sizeof(arr[0]);

  int mid =0;
  int low =0;
  int high =n-1;

while(mid <= high)
    {
      if(arr[mid] == 0)
      {
        swap(arr[low], arr[mid]);
        low++;
        mid++;
      }
      else if(arr[mid] == 1)
      {
        mid++;
      }
      else
      {
        swap(arr[mid] , arr[high]);
        high--;
      }
    }

  for(int i=0; i<n; i++)
    {
      cout<<arr[i]<<" ";
    }
      
    return 0;
}
