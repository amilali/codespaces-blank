// ARRAY INTERSECTION i,e COMMOM ELEMENT BETWEEN TWO ARRAY

#include<bits/stdc++.h>

using namespace std;

void intersec(int arr[], int n, int arr1[], int n1)
{
  for(int i =0 ; i<n ; i++)
    {
      for(int j =0 ; j<n1; j++)
        {
          if(arr[i]==arr1[j])
          {
            cout<<arr1[j]<<" "; 
            arr1[j] = INT_MIN; // agar pehle me 2 bar 3 aaya toh ye 3 ko 2 bar print kar dega issi liye hum jo element common hai yusko print kara ke yusko -infinity (INT_MIN) se assign kar denge
            break; // fir loop ko break kar denge 
          }
        }
    }
}

// another method

// void intersec(int arr[], int arr2[])
// {
//   int i=0;
//   int j=0;
//   while(i<4 && j<3)
//     {
//       if(arr[i] == arr2[j])                          // Optimal sol O(n)
//       {
//         cout<<arr2[j];
//       }
//       i++;
//       j++;
//     }
// } 

// another optimal using hashmap

// void intersec(int arr[], int n, int arr1[], int n1)
// {
//   unordered_map <int , bool> mp;
//   for(int i=0; i<n; i++)
//     {
//       mp[arr[i]] = true;
//     }                                                 // Also O(n) solution

//   for(int i=0; i<n1; i++)
//     {
//       if(mp.find(arr1[i])!=mp.end())
//       {
//         cout<<arr1[i]<<" ";
//       }
//     }
// }


int main()
{
    int arr[] = {2,6,2,3,2};
    int arr1[] = {3,2};

    int size = sizeof(arr)/sizeof(arr[0]);
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    
    intersec(arr, size, arr1, size1);
    return 0;
}