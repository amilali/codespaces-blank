#include<bits/stdc++.h>
using namespace std;

void  movezero(int arr[], int n)
{
  int start =0;
  int end = n-1;

  while(start<=end)
  {
    if(arr[start] == 0)
    {
      swap(arr[start++], arr[end--]);
    }
    else if(arr[end] == 0){
      end--;
    }
    else{
      start++;
    }
  }
}

int main(){
  int arr[] ={0,1,2,0,1,0,3,2};

  int n = sizeof(arr)/sizeof(arr[0]);

  movezero(arr,n);

  for(int i=0; i<n; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}