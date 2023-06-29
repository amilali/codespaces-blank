
// brute force Solution O(n^3)

var threeSumClosest = function(arr, target) {
    let diff = Number.MAX_VALUE;
    for(let i=0; i<arr.length; i++)
    {
        for(let j=i+1; j<arr.length; j++)
        {
            for(let k=i+2; k<arr.length; k++)
            {
                let sum = arr[i]+arr[j]+arr[k];
                if(sum===target)
                {
                    return target;
                }
                else if(target-sum < diff)
                {
                    diff=sum;
                }
            }
        }
    }
    return diff;
}


// optimial solution using  binary search O(n^2)

var threeSumClosest = function(arr, target) {
    let diff = Number.MAX_VALUE;
    let ans = 0;

    // Sort the array in ascending order
    arr.sort((a, b) => a - b);

    for (let i = 0; i < arr.length - 2; i++) {
        let start = i + 1;
        let end = arr.length - 1;

        while (start < end) {
            let sum = arr[i] + arr[start] + arr[end];

            if (sum === target) {return target;}
            else if (Math.abs(sum - target) < diff) {
                diff = Math.abs(sum - target);
                ans = sum;
            }

            if (sum < target) {
                start++;
            } else {
                end--;
            }
        }
    }

    return ans;
};