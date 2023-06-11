#include<bits/stdc++.h>
using namespace std;

void mergetwo(int arr[], int n, int arr2[], int n1, int arr3[])
{
    int i=0, j=0,k=0;
    while(i<n && j<n1)
    {
        if(arr[i]>arr[j])
        {
            arr3[k++] = arr[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }

    while(i<n)
    {
        arr3[k++] = arr[i++];
    }

     while(j<n1)
    {
        arr3[k++] = arr2[j++];
    }
}


int main()
{
    int arr[]={1,2,3,4};
    int arr2[]={5,6,7,8};

    int n = sizeof(arr)/sizeof(arr[0]);
    int n1 = sizeof(arr2)/sizeof(arr2[0]);
    int arr3[n+n1];

    mergetwo(arr,n,arr2,n1,arr3);

    for(int i=0; i<n+n1; i++)
    {
        cout<<arr3[i];
    }
return 0;
}