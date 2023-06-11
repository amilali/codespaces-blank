//Longest Palindrome
#include<bits/stdc++.h>

using namespace std;

int palindrome(int n)
{
  int temp =n;
  int sum =0;
  while(n!=0)
    {
      int rem = n%10;
      sum = sum*10+rem;
      n=n/10;
    }
  if(temp == sum)
  {
    return 1;
  }
  else{ return 0;}
}

int main()
{
  int arr[] ={1,2,3675,153,121};

  int n = sizeof(arr)/sizeof(arr[0]);
  int longest = INT_MIN;
  for(int i=0; i<n; i++)
    {
      if(palindrome(arr[i]) && arr[i]>longest)
      {
        longest = arr[i];
      }
    }
  cout<<"Longest Palindrome is : "<<longest;
}