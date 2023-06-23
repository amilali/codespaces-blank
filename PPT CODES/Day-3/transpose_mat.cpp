class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& arr) {
        int row = arr.size();
        int col = arr[0].size();

        vector<vector<int>> new_arr(col,vector<int>(row)); 
        for(int i=0; i<row; i++)
        {
            for(int j=0; j<col; j++)
            {
                new_arr[j][i] = arr[i][j];
            }
        }
        return new_arr;
    }
};