// count ELEMENT IN ARRAY
#include<bits/stdc++.h>

using namespace std;

void distint(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        int c=1;
        for(int j =i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
               arr[j] = INT_MIN;
            }
        }
        if(arr[i]!=INT_MIN)    
          cout<<arr[i]<<" : "<<c<<"\n";
    }
}

int main()
{
    int arr[] = {1,2,2,3,4,1,7,5,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    distint(arr, size);

    return 0;
}