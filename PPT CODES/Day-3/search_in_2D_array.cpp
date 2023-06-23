class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int target) {
        int row = arr.size();
        int col = arr[0].size();

        if(col==0)
        {
            return false;
        }

        int low =0;
        int high= row*col-1;
        int mid, midrow, midcol,mididx;

        while(low<=high)
        {
            mididx = low+(high-low)/2;
            midrow = mididx/col;
            midcol = mididx%col;
            mid = arr[midrow][midcol];
            if(mid == target)
            {
                return true;
            }
            else if(mid>target)
            {
                high = mididx-1;
            }
            else{
                low = mididx+1;
            }
        }
        return false;
    }
};