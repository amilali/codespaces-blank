#include<bits/stdc++.h>

using namespace std;
void countstr(string s)
{
  int n = s.length();
  int c=0;
  for(int i=0; i<n; i++)
    {
      c=1;
      for(int j=i+1; j<n; j++)
        {
          if(s[i] == s[j])
          {
            c++;
            s[j] = CHAR_MIN;
          }
        }
       if(s[i]!=CHAR_MIN)
      {
        cout<<s[i]<<c<<" ";
      }
    }
}


int main()
{
string s;
  getline(cin,s);

    countstr(s);
  
  return 0;
}


/////////////// Optimize to O(n) //////////////////////////////////////////

#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

int main()
{
  unordered_map<char , int> mp;

  string str = "Amilali";

  for(int i=0; i<str.length(); i++)
    {
      mp[str[i]]++;
    }

  for(auto i : mp)
    {
      cout<<i.first<<" : "<<i.second<<"\n";
    }
    return 0;
}
