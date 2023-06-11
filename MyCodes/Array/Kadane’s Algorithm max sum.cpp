#include<bits/stdc++.h>>
using namespace std;

int  maximumSumSubArray(int arr[], int n)
{
  int sum = 0;
  int max = INT_MIN;

  for(int i=0; i<n; i++)
    {
      sum = sum + arr[i];
      if(sum > max)
      {
        max = sum;
      }
      if(sum < 0)
      {
        sum =0;
      }

    }
  return max;
}

int main()
{
 int arr[] = {-2,1,-3,4,-1,2,1,-5,4}; 
 int n = sizeof(arr)/sizeof(arr[0]);

  int result = maximumSumSubArray(arr, n);
  cout<<result<<endl;
  return 0;
}