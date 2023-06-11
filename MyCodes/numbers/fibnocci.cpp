// fibnocci series

#include<bits/stdc++.h> 

using namespace std;

class fib{
      public: 
            
            int fibnocci(int n)
                {
                  if(n==0 || n==1)
                  {
                    return 1;
                  }
                  else{
                    return fibnocci(n-1) + fibnocci(n-2);
                  }
                }
      void display(int y){
              for(int i=0; i<y; i++)
                {
                  cout<<this->fibnocci(i)<<" ";
                  }
                }
};

int main()
{
  fib f1;
  f1.display(8);
  return 0;
}