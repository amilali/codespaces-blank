#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int n)
{

  if(n<=1)
    return false;
  for(int i=2; i<=n/2; i++)
    {
      if(n%i==0)
        return false;
    }
  return true;
}


int main()
{
  int n=10;
  

  for(int i=0; i<=n; i++)
    {
      if(checkPrime(i))
      {
        cout<<i<<" ";
      }
    }
  return 0;
}