#include<bits/stdc++.h>

using namespace std;

class factorial{
int fact(int i)
{
  if(i<1)
    return 1;

  return i * fact(i-1);
}
public :
void display(int n)
{
    for(int i=0; i<=n; i++)
      {
        cout<<this->fact(n)<<" ";
      }
}

};

int main()
{
  factorial f1;
  f1.display(10);
}