// check string is anagram

#include<bits/stdc++.h> 

using namespace std;

bool checkAnagram(string str, string str1)
{
  if(str.length() != str1.length())
  {
    return false;
  }

sort(str.begin(), str.end());
sort(str1.begin(), str1.end());

  for(int i=0; i<str.length(); i++)
  {
    if(str[i] != str1[i])
    {
      return false;
    }
  }
  return true;
}


int main()
{
 string str = "Amil";
 string str1 = "miAl";

  if(checkAnagram(str,str1))
  {
    cout<<"String is Anagram!"<<endl;
  }
  else{
    cout<<"It is not Anagram!";
  }

  
  return 0;
}