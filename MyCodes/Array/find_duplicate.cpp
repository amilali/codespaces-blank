#include<bits/stdc++.h> 
using namespace std;
// int main()
// {
//   int arr[] ={1,2,3,2,4,5,6,6};

//   int n = sizeof(arr)/sizeof(arr[0]);

//   sort(arr,arr+n);
//   int dup;
//   for(int i=0; i<n; i++)
//     {
//       if(arr[i] == arr[i+1])
//       {
//         dup = arr[i]; 
//         cout<<dup<<endl;
//       }
//     }
// }

int main()
{
    int arr[] = {1, 2, 3, 4, 3, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    for (auto j : mp)
    {
        if (j.second >= 2)
        {
            cout << j.first << endl;
        }
    }

    return 0;
}