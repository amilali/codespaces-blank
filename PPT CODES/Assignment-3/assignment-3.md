**Solution 1**
```javascript

var threeSumClosest = function(nums, target) {
    let result = nums[0] + nums[1] + nums[nums.length - 1];
    nums.sort((a, b) => a - b);
    for (let i = 0; i < nums.length - 2; i++) {
        let start = i + 1, end = nums.length - 1;
        while (start < end) {
            let sum = nums[i] + nums[start] + nums[end];
            if (sum > target) {
                end--;
            } else {
                start++;
            }
            if (Math.abs(sum - target) < Math.abs(result - target)) {
                result = sum;
            }
        }
    }
    return result;
};
```

**Solution 2**
```javascript

var fourSum = function(nums, target) {
    let res = []
    nums.sort((a,b)=>a-b)

    for(let i =0; i< nums.length-3;i++){
        for(let j =i+1; j<nums.length-2;j++){
            let f = nums[i];
            let s = nums[j];
            let left = j+1;
            let right = nums.length-1;
            while(left<right){
                let sum = f + s + nums[left] + nums[right];
                if(sum < target) left++
                else if(sum > target) right--
                else {
                    res.push([f,s,nums[left],nums[right]]);
                    while(nums[left] == nums[left+1])left++
                    while(nums[right] == nums[right-1]) right--
                    left++
                    right--
                }
            }
            while(nums[j] == nums[j+1]) j++
        }
        while(nums[i] == nums[i+1]) i++
    }
    return res
};
```
**Solution 3**
```javascript

var nextPermutation = function(nums) {
    for (let i = nums.length - 2; i >= 0; i--) {
        let currentIndexSwap = i;
        for (let j = i + 1; j < nums.length; j++) {
            if ((nums[j] > nums[i] && nums[j] < nums[currentIndexSwap]) || (nums[j] > nums[currentIndexSwap] && currentIndexSwap === i)) {
                currentIndexSwap = j;
            }
        }
        if (i !== currentIndexSwap) {
            [nums[i], nums[currentIndexSwap]] = [nums[currentIndexSwap], nums[i]];
            for (let k = i + 1; k < nums.length; k++) {
                for (let p = k + 1; p < nums.length; p++) {
                    if (nums[p] < nums[k]) {
                        [nums[k], nums[p]] = [nums[p], nums[k]];
                    }
                }
            }
            return nums;
        }
    }
    return nums.sort((a, b) => a - b);
};
```
**Solution 4**
```javascript
 const findExactPath = (nums, target, start, end) => {
     let mid =  Math.floor(start + (end - start) / 2);
     
     while(start < end) {
         if(nums[mid] == target) return mid; // // found this element
         else if(nums[mid] < target) start = mid + 1;  // search in right side of the array
         else end = mid ;  // search in left side of the array

         mid =  Math.floor(start + (end - start) / 2);
     }

     return mid;
 }
var searchInsert = function(nums, target) {
    let n = nums.length;

    if(n == 1 && nums[0] == target) return 0;

    const path = findExactPath(nums, target, 0, n);

    return path;
};```
**Solution 5**
```javascript
var plusOne = function(digits) {
    const num = BigInt(digits.join('')) + 1n;
    const numToString = num.toString();

    let arr = [];

    for(let i = 0; i < numToString.length; i++){
        const num = parseInt(numToString[i]);
        arr.push(num);
    } 
    return arr;
};
```
**Solution 6**

```javascript
var singleNumber = function(nums) {
    let n = nums.length;
    let c = 0;
    for (let i = 0; i < n; i++) {
        c = c ^ nums[i];
    }
    return c; 
};
```
**Solution 7**
```javascript
var summaryRanges = function(nums) {
    let i=0, j=0;
    let ret=[];
    while(i<nums.length) {
        j=i+1;
        while(j<nums.length && nums[j]-1===nums[j-1]) {
            j++;
        }
        if(i!==j-1) {
            ret.push(""+nums[i]+"->"+nums[j-1]);
        }else {
            ret.push(""+nums[i]);
        }
        i=j;
    }
    return ret;
};
```

**Solution 8**
```javascript
var eraseOverlapIntervals = function(intervals) {
	// sort by earliest finish time
    intervals.sort((a, b) => a[1] - b[1]);
    let prev = intervals[0], remove = 0;
    
    for(let i = 1; i < intervals.length; i++) {
        if(intervals[i][0] < prev[1]) remove++;
        else prev = intervals[i];
    }
    return remove;
};
```

