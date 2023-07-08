**Solution 1**
```javascript
var construct2DArray = function(original, m, n) {
    if(m * n !== original.length) return []
    let result = []
    
    for(let i = 0; i < original.length; i+=n){
        result.push(original.slice(i,n + i))
    }
    
    return result
};
```

**Solution 2**
```javascript
function arrangeCoins(n: number): number {
    const d = 8*n + 1;
    const res = Math.floor((-1 + d**0.5)/2);
    return res;
};
```
**Solution 3**
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
**Solution 4**
```javascript
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[][]}
 */
var findDifference = function(nums1, nums2) {
    let result = [[],[]]
    nums1 = [...new Set(nums1)]
    nums2 = [...new Set(nums2)]
    for(let val of nums1) {
        if(!nums2.includes(val)) {
            result[0].push(val)
        }
    }
    for(let val of nums2) {
        if(!nums1.includes(val)) {
            result[1].push(val)
        }
    }
    return result
};
```
**Solution 5**
```javascript
/**
 * @param {number[]} arr1
 * @param {number[]} arr2
 * @param {number} d
 * @return {number}
 */
var findTheDistanceValue = function(arr1, arr2, d) {
    const arr2Sorted = arr2.sort((a, b) => a - b);
    let dist = 0;
    
    for (const num of arr1) {
        if (isDistanceValid(num, d, arr2Sorted)) {
            dist += 1;
        }
    }
    
    return dist;
};

function isDistanceValid(number, dist, array) {
    let left = 0;
    let right = array.length - 1;
    
    while (left <= right) {
        const mid = Math.floor((right + left) / 2);
        
        if (Math.abs(number - array[mid]) <= dist) {
            return false;
        }
        
        if (array[mid] < number) {
            left = mid + 1;
        }
        
        if (array[mid] > number) {
            right = mid - 1;
        }
    }
    
    return true;
}
```
**Solution 6**

```javascript
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var findDuplicates = function(nums) {
    const Obj = {};
    return nums.filter(num => {
        Obj[num] = (Obj[num] || 0) + 1;
        return Obj[num] > 1;
    })
};
```
**Solution 7**
```javascript
/**
 * @param {number[]} nums
 * @return {number}
 */
var findMin = function(nums) {
    let low = 0, high = nums.length - 1;
    while(low <= high){
        let mid = parseInt((low + high)/2);
        if(nums[low] == nums[mid]){
            if(nums[low] > nums[low + 1]) return nums[low+1];
            else return nums[low];
        }
        else if(nums[high] == nums[mid]){
            if(nums[high] > nums[high -1]) return nums[high - 1];
            else return nums[high];
        }
        else if(nums[mid] > nums[high]){
            low = mid + 1;
        }
        else if(nums[mid] > nums[low]){
            high = mid - 1;
        }
        else if(nums[mid] < nums[low] && nums[mid] < nums[high]){
            high = high - 1;
        }
    }
};
```

**Solution 8**
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

