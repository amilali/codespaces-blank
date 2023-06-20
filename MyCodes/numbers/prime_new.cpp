#include<bits/stdc++.h> 
using namespace std;
int main()
{
  int n=2;
//   cin>>n;

  int c=2;
  while(c<n/2)
    {
      if(n%c==0)
      {
        cout<<"it is not prime\n";
        break;
      }
      c++;
    }

  if(c>=n/2)
  {
  cout<<"It is prime\n";
  }
  return 0;
}