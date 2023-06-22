// find largest and smallest element in array

large_small =(arr)=>{
let minmax = new Array();
let max = Number.MIN_VALUE;
let min = Number.MAX_VALUE;

arr.forEach((i) => {
    if(i>max)
    {
        max = i;
    }
    if(i<min)
    {
        min = i;
    }

});
minmax.push(max);
minmax.push(min);
return minmax;
}


let arr = [1,2,3,4,5,6,7,7];
console.log(large_small(arr));
