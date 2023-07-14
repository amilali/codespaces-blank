#include <bits/stdc++.h>
using namespace std;

// Matrix Multiplication
int main() {
    
int row1=2;
int col1=2;

int row2=2;
int col2=2;

    
int matrix1[row1][col1] ={{2,3},{3,2}};
int matrix2[row2][col2] ={{4,5},{6,7}};
int result[col1][row2];

for(int i=0; i<row1; i++)
{
    for(int j =0; j<col2; j++)
    {
        result[i][j]=0;
        
        for(int k=0; k<col1; k++)
        {
            result[i][j] += matrix1[i][k] * matrix2[k][j];
        }
        cout<<result[i][j]<<" ";
    }
    cout<<endl;
}
  return 0;
}