#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

void max_occurence(int arr[], int n)
{
  unordered_map <int , int> mp;
  for(int i=0; i<n; i++)
    {
      mp[arr[i]]++;
    }

int count = INT_MIN;
  
  for(auto i : mp)
    {
      if(i.second > count)
      {
        count = i.second;
      }
    }

  for(auto i : mp)
  {
    if(i.second == count)
    {
      cout << i.first << " ";
    }
  }
}

int main()
{  
    int arr[] = {1,1,5,5,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    max_occurence(arr,n);
    return 0;
}  



