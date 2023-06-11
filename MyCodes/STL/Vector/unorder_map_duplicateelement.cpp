#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
void duparr(int  arr[], int n)
{
  unordered_map<int, int> mp;

  for(int i=0; i<n; i++)
    {
      mp[arr[i]]++;
    }
  for(auto it : mp)
    {
      if(it.second == 2)
      {
        cout<<it.first<<" ";
      }
    }
}



int main()
{
    // O(n)

  int arr[] ={1,1,2,2,5,6,4,3,5,6};
  int n = sizeof(arr)/sizeof(arr[0]);
  duparr(arr,n);

  
    return 0;
}


////////////////////////////////////////////////////

#include<bits/stdc++.h>
#include<unordered_map>
#include<array>
using namespace std;

int main()
{
  unordered_map <int , int > mp;
  vector <int> arr;
  int n;
  cout<<"Enter the Number of Nth Terms:\n";
  cin>>n;
  arr.resize(n);

  cout<<"Enter The values:\n";
  for(int i=0; i<n; i++)
    {
      cin>>arr[i];
    }
  for(int i=0; i<n; i++)
  {
    mp[arr[i]]++;
  }
  cout<<"Distint Element Will Be:\n";
  for(auto j : mp)
    {
      if(j.second == 1)
      {
        cout<<j.first<<" ";
      }
    }
    return 0;
}

/// Another method /////////////////////////////////////////////////

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

void removedup(int arr[], int n)
{
  unordered_map <int , bool> mp;

  for(int i=0; i<n; i++)
    {
      if(mp.count(arr[i]) == 0)
      {
        cout<<arr[i]<<" ";
      }
      mp[arr[i]] = true;
    }
}

int main()
{  
    int arr[] = {1,1,2,3,5,5,6,4,7,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    removedup(arr,n);
    return 0;
}  



