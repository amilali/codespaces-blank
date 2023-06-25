# # Assignment 2

**Solution-2**
```javascript
var distributeCandies = function(candyType) {
    let numOfTypes = [...new Set(candyType)].length
    let numToEat =  candyType.length / 2
    return numOfTypes >= numToEat ? numToEat: numOfTypes 
};
```

**Solution-3**
```javascript
var arrayPairSum = nums => {
    nums.sort((a, b) => a - b);
    let sum = 0;

    for (let i = 0; i < nums.length; i += 2) {
        sum += nums[i]
    }

    return sum
};
```

**Solution-5**
```javascript
var maximumProduct = function(nums) {

    nums = nums.sort((a,b)=>a-b);
    let n = nums.length;
    let ans1= nums[n-1]*nums[n-2]*nums[n-3];
    let ans2= nums[0]*nums[1]*nums[n-1];

    maxi = Math.max(ans1, ans2);
    return maxi;
};
```

**Solution-6**
```javascript
var search = function(nums, target) {
    let s=0;
    let e = nums.length-1;
    while(s<=e){
        let mid = Math.floor((s+e)/2);
        if(nums[mid] === target)
        {
            return mid;
        }
        if(nums[mid]>target)
        {
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
};
```
**Solution=7**
```javascript
var isMonotonic = function(nums) {
    let increasing = true;
    let decreasing = true;

    for(let i=1; i<nums.length; i++)
    {
        if(nums[i]>nums[i-1])
        {
            decreasing = false;
        }
        if(nums[i]<nums[i-1])
        {
            increasing = false;
        }
    }
    return increasing || decreasing;
};
```

**Solution-8**
```javascript
var smallestRangeI = function(nums, k) {
    const min = Math.min(...nums);
    const max = Math.max(...nums);
    
    if (max - min <= 2*k) return 0;
    return max - min - 2*k;
};
```