//DISTINT ELEMENT IN ARRAY
#include<bits/stdc++.h>

using namespace std;

void distint(int arr[] , int n)
{
    for(int i=0; i<n; i++)
    {
        int c=0;
        for(int j =0; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==1)
        {
            cout<<arr[i]<<" "<<endl;
        }
    }
}

int main()
{
    int arr[] = {1,2,2,3,4,1,7,5,8,9};

    int size = sizeof(arr)/sizeof(arr[0]);

    distint(arr, size);

    return 0;
}