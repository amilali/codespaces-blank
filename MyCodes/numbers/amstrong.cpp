// Amstrong number
#include<bits/stdc++.h>

using namespace std;
int count(int n)
{
  int c=0;
  while(n!=0)
    {
      c++;
      n=n/10;
    }
  return c;
}

bool ams(int n)
{
  int temp = n;
  int sum=0;
  int c = count(n);
  while(n!=0)
    {
      int rem = n%10;
      sum = sum + pow(rem,c);
      n=n/10;
    }
  if(temp == sum)
    return true;

  return false;
}

int main()
{
  int n;
  cin>>n;
for(int i=0; i<=n; i++)
  {
  if(ams(i))
  {
    cout<<i<<" ";
  }
    }
  return 0;
}