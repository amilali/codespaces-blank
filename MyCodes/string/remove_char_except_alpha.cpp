// remove all character from string except alphabets

#include <iostream>
using namespace std;

int main()
{
  string str = "Akjsbvkjs[]&^$";
  string s2 = "";

  int n = str.length();

  for(int i=0; i<n; i++)
    {
      if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] == '\0')
        {
            s2.push_back(str[i]);
        }
    }

  cout<<s2<<"\n";
  return 0;
}