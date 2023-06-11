// Strings

#include<bits/stdc++.h>
#include <cstring>

using namespace std;

int main()
{
  string str;
  cout<<"Enter name:\n";
  cin>>str;
  int n = str.length();
  string temp = str;
  int start =0;
  int end = n-1;

while(start<end)
  {
    swap(str[start++], str[end--]);
  }

// Anothe methond
  /*for(int i=0 ; i<n/2; i++)
    {
      swap(str[i] , str[n-i-1]);
    }*/


  if(temp == str)
  {
    cout<<"It is palindrome\n"<< str << "!="<<temp;
  }
  else{
    cout<<"it is not\n"<< str << "!="<<temp;
  }
  return 0;
}