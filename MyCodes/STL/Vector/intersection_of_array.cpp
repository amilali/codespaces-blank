#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

void intersection(int arr[], int n, int arr1[], int n1)
{
  unordered_map <int , bool> mp;
  for(int i=0; i<n; i++)
    {
      mp[arr[i]] = true;
    }

  for(int i=0; i<n1; i++)
    {
     // if(mp.find(arr1[i])!=mp.end() && mp[arr1[i]]) //this one is also correct
      // also we can write :
      if(mp.count(arr1[i]) != 0 && mp[arr1[i]])
      {
        cout<<arr1[i]<<" ";
        mp[arr1[i]] = false;
      }
    }
}

int main()
{  
    int arr[] = {1,2,3,4,5,6,3};
    int arr1[] = {3,2,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    intersection(arr,n, arr1, n1);
    return 0;
}  