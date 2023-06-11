// Function to remove all spaces from a given string
#include <bits/stdc++.h>
using namespace std;

string removeSpaces(string str)
{
  string str1 = "";
  for(int i=0; i<str.length(); i++)
    {
      if(str[i]!=' ')
      {
        str1.push_back(str[i]);
      }
    }
  return str1;

}

int main()
{
string str = "P re p i n sta ";
str=removeSpaces(str);
cout << str;
return 0;
}