// Binary Search using recursion
// Note: it only work with sorted array .
#include<bits/stdc++.h> 

using namespace std;

int BinarySearch(int arr[] ,int start, int end, int x)
{
  while/* or if */(start<=end)
    {
      int mid = (start+end)/2;

      if(arr[mid] == x)
        return mid;
      if(arr[mid] < x)
        return BinarySearch(arr, mid+1, end,x);
      else
         return BinarySearch(arr, start, mid-1,x);
    }
  return -1;
}


int main()
{
  int arr[]={1,2,3,4,5};

  int n = sizeof(arr)/sizeof(arr[0]);

  int x;
  cin>>x;

  int result = BinarySearch(arr,0,n-1, x);

  cout<<"Element "<<x<< " present at index:"<<result<<endl;

  return 0;
}