#include<bits/stdc++.h>
using namespace std;

int primE(int n,  int i)
{
  if(n<=1)
  {
    return 0;
  }
  if(i == 1)
  {
    return 1;
  }
  if(n%i==0)
  {
    return 0;
  }

return primE(n, i-1);
    
}
int main()
{
  int n=10;
  //cin>>n;
 for(int i=0; i<=n; i++)
   {
     if(primE(i, i/2))
     {
       cout<<i<<" ";
     }
   }
  return 0;
}