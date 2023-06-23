// 73. Set Matrix Zeroes
// leetcode link: https://leetcode.com/problems/set-matrix-zeroes/description/

// Input: matrix = [[1,1,1]
//                  [1,0,1]
//                  [1,1,1]]
// Output: [[1,0,1]
//          [0,0,0]
//          [1,0,1]]

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Set_m_zero(vector<vector<int>> &arr){

    vector<bool> row(arr.size());
    vector<bool> col(arr[0].size());
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            if (arr[i][j] == 0) {
                row[i] = true;
                col[j] = true;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[0].size(); j++) {
            if (row[i] || col[j]) {
                arr[i][j] = 0;
            }
        }
    }

    return arr;
}




int main()
{
    vector<vector<int>> arr= {{1,1,1},{1,0,1},{1,1,1}};
    cout<<"Before flipping"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    Set_m_zero(arr);
    cout<<"after\n";
        for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr[i].size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}