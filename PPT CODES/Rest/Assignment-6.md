**Solution 1**
```javascript
var diStringMatch = function (s) {
  let count1 = -1;
  let count2 = s.length + 1;
  const result = [];
  for (let i = 0; i <= s.length; i++) {
    if (s[i] === "I") {
      count1 = count1 + 1;
      result.push(count1);
    } else {
      count2 = count2 - 1;
      result.push(count2);
    }
  }
  return result;
};
```

**Solution 2**
```javascript
var searchMatrix = function(matrix, target) {
    
    const m = matrix[0].length,n = matrix.length;
    if (target < matrix[0][0] || target > matrix[n-1][m-1]) return false;

    let low = 0,high = matrix.length-1;
    let mid;
    while (low <= high) {
        mid = Math.floor((low+high)/2)

        if (target <= matrix[mid][m-1] && target >= matrix[mid][0]) break;
        if (target < matrix[mid][0]) high = mid - 1;
        else if (target > matrix[mid][m-1]) low = mid + 1;
    }


    return binarySearch(target,matrix[mid])
};

function binarySearch(target,nums) {
    let low = 0,high = nums.length-1;

    while (low <= high) {
        let mid = Math.floor((low+high)/2);
        if(target == nums[mid]) return true;

        if(target < nums[mid]) high = mid - 1;
        else low = mid + 1;
    }

    return false
}
```
**Solution 3**
```javascript
var validMountainArray = function (arr) {
  if (arr.length < 3 || arr[0]>=arr[1]) return false;
  let peak = true;
  for (let i = 0; i < arr.length - 1; i++) {
    if (peak && arr[i] > arr[i + 1]) {
      peak = false;
    } else if ((!peak && arr[i] <= arr[i + 1])||(arr[i]===arr[i+1])) {
      return false;
    }
  }
  return peak ? false : true;
};
```
**Solution 4**
```javascript
var findMaxLength = function(nums) {
    let hash = {0:-1};
    let count = 0;
    let max = 0;
    for (let i=0;i<nums.length;i++) {
        if (nums[i] == 0) count--;
        else count++;

        if (hash[count]!=null) max = Math.max(max, i - hash[count]);
        else hash[count] = i 
    }
    return max;
};
```
**Solution 5**
```javascript
class Solution {
public:
    int minProductSum(vector<int>& A, vector<int>& B) {
        sort(begin(A), end(A));
        sort(begin(B), end(B), greater<>());
        int ans = 0;
        for (int i = 0; i < A.size(); ++i) ans += A[i] * B[i];
        return ans;
    }
};
```
**Solution 6**

```javascript
var findOriginalArray = function(changed) {
    if (changed.length % 2 === 1) return []; // get rid of odd-length inputs
    let double = true;
    changed.sort((a,b)=>a-b) // sort array in ascending order
    let i = 0;
    while (i < changed.length){
        let pos = changed.indexOf(changed[i]*2, i+1); // check for presence of doubled number
        if (pos === -1){
            double = false; // if not found, break out of the loop w/ false check
            break;
        } else {
            changed.splice(pos,1); // if found, get rid of doubled number and move on.
            i++;
        } 
    }
    return (double? changed: []);
};
```
**Solution 7**
```javascript
var generateMatrix = function(n) {
    let save = Array.from(Array(n),()=>new Array(n).fill(0))
    let count =1;
    let left =0;
    let right =n-1;
    let bottom = n-1;
    let top = 0;
    let dir = 0;

    while(count <= n*n){
        if(dir == 0){
            for(let i =left; i<=right; i++){
                save[top][i] = count;
                count++
            }
            top++
            dir++
        }
        if(dir == 1){
            for(let i =top; i<=bottom; i++){
                save[i][right] = count;
                count++
            }
            right--
            dir++        
        }
        if(dir == 2){
            for(let i =right; i>=left; i--){
                save[bottom][i] = count;
                count++
            }
            bottom--
            dir++        
        }
        if(dir == 3){
            for(let i =bottom; i>=top; i--){
                save[i][left] = count;
                count++
            }
            left++
            dir++        
        }
        dir = 0;
    }

    return save;
};
```

**Solution 8**
```javascript
function multiplySparseMatrices(mat1, mat2) {
  const m = mat1.length;    // Number of rows in mat1
  const k = mat1[0].length; // Number of columns in mat1 (equal to the number of rows in mat2)
  const n = mat2[0].length; // Number of columns in mat2

  // Create an empty result matrix with dimensions m x n
  const result = [];

  for (let i = 0; i < m; i++) {
    result[i] = [];
    for (let j = 0; j < n; j++) {
      let sum = 0;
      for (let l = 0; l < k; l++) {
        // Check if the current element of mat1 is non-zero
        if (mat1[i][l] !== 0 && mat2[l][j] !== 0) {
          sum += mat1[i][l] * mat2[l][j];
        }
      }
      result[i][j] = sum;
    }
  }

  return result;
}
```

