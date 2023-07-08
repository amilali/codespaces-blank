**Solution 1**
```javascript

class Solution {
public:
    vector<int> arraysIntersection(vector<int>& A, vector<int>& B, vector<int>& C) {
        int i = 0, j = 0, k = 0, R = A.size(), S = B.size(), T = C.size();
        vector<int> ans;
        while (i < R && j < S && k < T) {
            int a = A[i], b = B[j], c = C[k];
            if (a == b && b == c) {
                ans.push_back(a);
                ++i, ++j, ++k;
            } else {
                int mx = max({ a, b, c });
                if (a < mx) ++i;
                if (b < mx) ++j;
                if (c < mx) ++k;
            }
        }
        return ans;
    }
};
```

**Solution 2**
```javascript
var findDifference = function(nums1, nums2) {
    nums1 = new Set(nums1); nums2 = new Set(nums2);
    //store array as sets. every set has a unique ele.
    for (let item of nums1){//for every item that belongs to nums1
        if (nums2.has(item)) { nums1.delete(item); nums2.delete(item);}
        //if 2nd arr has it then delete it from both of the arrays
    }
    return [Array.from(nums1),Array.from(nums2)];//return the rem ele from both arrays
};
```
**Solution 3**
```javascript

var transpose = function(arr) {
        let row = arr.length;
        let col = arr[0].length;

        let new_arr = new Array(); 
        for(let i=0; i<row; i++)
        {
            for(let j=0; j<col; j++)
            {
                new_arr[j][i] = arr[i][j];
            }
        }
        return new_arr;
};
```
**Solution 4**
```javascript
var arrayPairSum = nums => {
    nums.sort((a, b) => a - b);
    let sum = 0;

    for (let i = 0; i < nums.length; i += 2) {
        sum += nums[i]
    }

    return sum
};
};```
**Solution 5**
```javascript
function arrangeCoins(n: number): number {
    const d = 8*n + 1;
    const res = Math.floor((-1 + d**0.5)/2);
    return res;
};
```
**Solution 6**

```javascript
var sortedSquares = function(nums) {
    let start = 0;
    let end = nums.length - 1;
    let idx = end;
    let sortPowArr = [];

    while (idx > -1) {
        if (Math.abs(nums[start]) > Math.abs(nums[end])) {
            sortPowArr[idx--] = nums[start] * nums[start];
            start++;
        } else {
            sortPowArr[idx--] = nums[end] * nums[end];
            end--;
        }
    }
    return sortPowArr;
};
```
**Solution 7**
```javascript
var maxCount = function(m, n, ops) {
    if(ops.length === 0) return m*n;
    let min = [m,n];
    for(let [x,y] of ops) {
        min = [Math.min(x, min[0]), Math.min(y, min[1])];
    }
    return min[0]*min[1];
};
};
```

**Solution 8**
```javascript
var shuffle = function(nums, n) {
    let res = [];
    for (i = 0; i < n; i++) {
        res.push(nums[i],nums[i+n]);
    }
    return res;
};
```

