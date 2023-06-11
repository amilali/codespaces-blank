#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
  unordered_map<int , int> mp;

  vector <int> arr = {1,2,1,3,5,2,2,6,3,2,1};

  for(auto it : arr)
    {
      mp[arr[it]]++;
    }

  for(auto i : mp)
    {
      cout<<i.first<<" : "<<i.second<<"\n";
    }
    return 0;
}
