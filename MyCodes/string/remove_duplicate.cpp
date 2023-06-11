#include<bits/stdc++.h>
using namespace std;

int main()
{
  string str = "aabbaaac";

  string str1;
  int n = str.length();
  sort(str.begin(), str.end());

  for(int i=0; i<n; i++)
    {
      if(str[i] != str[i+1])
      {
        str1.push_back(str[i]);
      }
    }
cout<<str1<<endl;
  
  return 0;
}