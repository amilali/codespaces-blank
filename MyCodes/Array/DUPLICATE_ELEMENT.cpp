// DUPLICATE ELEMENT IN ARRAY


#include <iostream>
using namespace std;

void dup(int arr[] , int n)
{
  for(int i=0; i<n; i++)
    {
      int c=0;
      for(int j=i+1; j<n;j++)
        {
        if(arr[i] == arr[j])
        {
          c++;
        }
          
        }
      if(c==1)
          {
            cout<<arr[i]<<endl;
          }
    }
}
int main()
{
  int arr[]={1,2,2,3,4,1};
  int n = sizeof(arr)/sizeof(arr[0]);

  dup(arr, n);

  return 0;
  }