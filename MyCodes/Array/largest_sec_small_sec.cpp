// program to find largest and second largest element in array

#include<bits/stdc++.h>

using namespace std;

void printLar_Sec(int arr[], int n)
{
  int max = INT_MIN;

  for(int i=0; i<n; i++)
    {
      if(arr[i] > max)
      {
        max = arr[i];
      }
    }
  cout<<"Largest Element is: "<<max;

  // Second largest 

  int sec_max = INT_MIN;

  for(int i=0; i<n; i++)
    {
      if(arr[i]!=max && arr[i]>sec_max)
      {
        sec_max = arr[i];
      }
    }
  cout<<"\nSecond largest is: "<<sec_max;
}

// Smallest 

void smallest_sec(int arr[], int n)
{
  int small = INT_MAX;
  for(int i=0; i<n; i++)
    {
      if(arr[i]<small)
      {
        small = arr[i];
      }
    }
  cout<<"\nSmallest elemet is: "<<small;

  // second smallest

  int sec_small = INT_MAX;

  for(int i=0; i<n; i++)
    {
      if(arr[i]!=small && arr[i]<sec_small)
      {
        sec_small = arr[i];
      }
    }
  cout<<"\nSecond Smallest elemet is: "<<sec_small;
}

int main()
{
  int arr[]={1,2,3,8,5,4};
  int n = sizeof(arr)/sizeof(arr[0]);   // size of array

  printLar_Sec(arr, n);
  smallest_sec(arr, n);

  return 0;
}