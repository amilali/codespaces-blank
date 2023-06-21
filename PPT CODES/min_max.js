// brute force approach

// function sec_largest(arr){
//     let max = Number.MIN_VALUE;
//     let sec_max = Number.MIN_VALUE;

//     for(let i in arr)
//     {
//         if(arr[i]>max)
//         {
//             max= arr[i];
//         }
//     }
//     for(let j in arr)
//     {
//         if(arr[j]!=max && arr[j]>sec_max)
//             {
//                 sec_max = arr[j];
//             }
//     }
//     return sec_max;
// }

// optimize approach

// sec_largest = (arr) =>
// {
//         arr = [...new Set(arr)].sort();
//         return arr[arr.length-2];
// }




let arr = [1,2,3,4,5,6,7,7];

console.log(sec_largest(arr));