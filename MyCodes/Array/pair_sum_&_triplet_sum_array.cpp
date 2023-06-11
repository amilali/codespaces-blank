//PAIR SUM AND TROPLET ELEMENT IN ARRAY
#include<bits/stdc++.h>

using namespace std;

void pairsum(int arr[] , int n)
{
    for(int i=0; i<n; i++)
      {
        for(int j =i+1; j<n; j++)
        {
            if(arr[i]+arr[j] == 7)
            {
                cout<<"["<<arr[i]<<" "<<arr[j]<<"]\n"<<endl;
            }
        }
        
    }
}

// two sum optimize O(n)
 vector<int> twoSum(vector<int>& a, int b) {
        unordered_map <int, int> mp;
        for(int i=0; i<a.size(); i++)
        {
           if(mp.find(b-a[i]) != mp.end())
           {
               return {mp[b-a[i]], i};
           }
           mp[a[i]]=i;
        }
        return {-1,-1};
    }
//  TRIPLET SUM IN ARRAY
void tripletsum(int arr[], int n)
{
	for(int i=0; i<n; i++)
    {
      for(int j=i+1;j<n;j++)
        {
          for(int k=j+1; k<n;k++)
            {
              if(arr[i]+arr[j]+arr[k]==7)
              {
                cout<<"["<<arr[i]<<" "<<","<<arr[j]<<" "<<","<<arr[k]<<"]\n";
              }
            }
        }
    }
}
int main()
{
    int arr[] = {1,2,2,3,4,1,7,5,8,9,0};

    int size = sizeof(arr)/sizeof(arr[0]);

    cout<<"Pair Sum:\n";
    pairsum(arr, size);

    cout<<"Triplet Sum:\n";
    tripletsum(arr, size);
    return 0;
}