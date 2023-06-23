#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> flippping_image_horizontal(vector<vector<int>> &arr){
  for(int i=0; i<arr.size(); i++)
  {
    int j=0;
    int k=arr[i].size()-1;
    while(j<k)
    {
        swap(arr[i][j++], arr[i][k--]);
    }
    for(int j=0; j<arr[i].size();j++)
    {
        arr[i][j] =  arr[i][j] ==1 ? 0 :1;
    }
  }
  return arr;
}

vector<vector<int>> flippping_image_vertically(vector<vector<int>> &arr){
    for(int i=0; i<arr[0].size();i++) // iterating to coloumn
    {
        int j =0; /// first row
        int k = arr.size()-1; //last row
        while(j<k)
        {
            swap(arr[j++][i], arr[k--][i]);
        }

        for(int j=0; j<arr.size(); j++) // iterating to row
        {
            arr[j][i] = arr[j][i]==0?1:0;
        }
    }
    return arr;
}


int main()
{
    vector<vector<int>> arr= {{1, 0,0}, {1, 1, 0},{0,0,1}};
    cout<<"Before flipping"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }




    
    flippping_image_horizontal(arr);
    cout<<"after swapping horizontal\n";
    for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr[i].size();j++)
            {
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }



     flippping_image_vertically(arr);
        cout<<"after swapping vertically\n";
    for(int i=0;i<arr.size();i++)
        {
            for(int j=0;j<arr[i].size();j++)
                {
                    cout<<arr[i][j]<<" ";
                }
        cout<<endl;
        }
    return 0;
}