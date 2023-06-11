#include<bits/stdc++.h> 
using namespace std;

void print1to10(int n)
{
 if(n<=0)
 {
   cout<<n;
 }
  else{
    print1to10(n-1);
    cout<<n<<" ";
  }
}


int main()
{
  int n=100;
  print1to10(n);
  return 0;
}