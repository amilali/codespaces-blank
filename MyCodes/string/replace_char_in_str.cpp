// Replace character in Strings

#include<bits/stdc++.h>


using namespace std;

int main()
{
  string str;
  cout<<"Enter name:\n";
  cin>>str;
  char a , b;
  cout<<"Enter two character to replace\n";
  cin>>a>>b;

  int n = str.length();
    for(int i=0; i<n;i++)
      {
        if(str[i]==a)
        {
          str[i] = b;
        }
      }
cout<<str<<"\n";

  
  return 0;
}