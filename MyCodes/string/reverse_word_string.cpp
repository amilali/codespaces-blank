// Reverse word in string
#include <bits/stdc++.h>
using namespace std;

/*string strrev(string str, int start, int end)
{
   start=0;
   end= str.length()-1;
  while(start<end)
    {
      swap(str[start++], str[end--]);
    }
  return str;
}*/

string Rev_Words(string str)
{
  
reverse(str.begin(), str.end());
str.push_back(' ');
  int n= str.length();

  int j=0;

  for(int i=0; i<n; i++)
    {
      if(str[i]==' ')
      {
        reverse(str.begin()+j/*first ch*/, str.begin()+i/*last ch before space  element*/);
        j=i+1; //update j after  reversing first word
      }
    }
        str.pop_back();

  return str;

}

int main()
{
string str = "amil ali waris engineer";
str = Rev_Words(str);
cout << str;
return 0;
}