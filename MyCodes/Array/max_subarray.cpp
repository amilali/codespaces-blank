//Maximum subarray
#include<bits/stdc++.h>

using namespace std;
void maxsub(int arr[], int n, int k)
{
  int sum =0;
  int max=INT_MIN;
  for(int i=0; i+k<=n; i++)
    { sum=0;
      for(int j=i; j<i+k; j++)
        {
          sum = sum +arr[j];
        }
      if(sum>max)
      {
        max = sum;
      }
    }
  cout<<"Max sum is: "<<max;
}



int main()
{
int arr[] = {1,2,3,4,5,6};
int n= sizeof(arr)/sizeof(arr[0]); // size of array

int k=3; // k is value at which we want to sum

maxsub(arr,n,k);

return 0;
}