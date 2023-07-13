// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

// Matrix Trnapose
int main() {
    
int row=2;
int col=2;

int matrix[row][col] ={{1,2},{3,1}};
int trans_matrix[col][row];

for(int i=0; i<row; i++)
{
    for(int j=0; j<col; j++)
    {
        trans_matrix[j][i] = matrix[i][j];
    }
    cout<<endl;
}

for(int i=0; i<col; i++)
{
    for(int j=0; j<row; j++)
    {
        cout<<trans_matrix[i][j]<<" ";
    }
    cout<<endl;
}

  return 0;
}