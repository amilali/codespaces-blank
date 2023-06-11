// Function to Capalize first and last letter of word from a given string
#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string str)
{
  
  for(int i=0; i<str.length(); i++)
    {
      if(str[i]==' ')
      {
        str[i+1] = (str[i+1])-32;
        str[i-1] = (str[i-1])-32;
      }
      else if(i==0 || i==str.length()-1)
      {
        str[i] = str[i]-32;
      }
      
    }
  return str;

}

int main()
{
string str = "amil ali";
str=removeSpaces(str);
cout << str;
return 0;
}