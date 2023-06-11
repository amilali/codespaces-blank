// sort 0,1 & 2 by using brute force
#include<bits/stdc++.h> 
using namespace std;
int main()
{
  int arr[]={1,0,1,2,1,0,1};

  int n = sizeof(arr)/sizeof(arr[0]);

  int c1=0, c2=0, c3=0;

  for(int i=0; i<n;i++)
    {
     switch(arr[i])
       {
         case 0:
         c1++;
         break;

         case 1:
         c2++;
         break;

         case 2:
         c3++;
         break;
       }
    }
 int i=0;
while(c1--)
  {
    arr[i++] =0;
  }
 while(c2--)
  {
    arr[i++] =1;
  }
while(c3--)
  {
    arr[i++] =2;
  }
for(int i=0; i<n; i++)
  {
  cout<<arr[i];
    }
  return 0;
}