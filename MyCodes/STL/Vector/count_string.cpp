// #include<bits/stdc++.h>
// #include<unordered_map>

// using namespace std;

// int main()
// {
//   unordered_map<char , int> mp;

//   string str = "Amilali";

//   for(int i=0; i<str.length(); i++)
//     {
//       mp[str[i]]++;
//     }

//   for(auto i : mp)
//     {
//       cout<<i.first<<" : "<<i.second<<"\n";
//     }
//     return 0;
// }  


// string -> "Amil" = A -> 1 ,m->1 etc.............


#include<bits/stdc++.h>
using namespace std;

void count_string(string str)
{
  string str1;
  for(int j=0; j<str.length(); j++)
  {
     if(str[j] != ' ')
     {
       str1.push_back(str[j]);
     }
  }


  unordered_map<char, int> mp;

  for(auto i:str1)
  {
    mp[i]++;
  }

for(auto i : mp)
{
  cout<<i.first<<" : "<<i.second<<endl;
}

}

int main()
{
  // cout<<"Enter any string: ";
  string str="Amil Ali";
  // getline(cin,str);
  count_string(str);
  return 0;
}


























