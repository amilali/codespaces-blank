// let say i want to rotate it by 2 times
// brute forcce approach

// function rotate_arr(arr)
// {
//     for(let i=0; i<2; i++)
//     {
//         let temp = arr[0];
//         for(let j=1; j<=arr.length-1; j++)
//         {                                            // from first to last
//             arr[j-1] = arr[j];
//         }
//         arr[arr.length-1] = temp;
//     }
//     return arr;
// }

// optimize approach

// rotate_arr = (arr) =>
// {
//     for(let i=0; i<2; i++)
//     {
//         let first_element = arr.pop();  // from last to first
//         arr.unshift(first_element);     // add elelment from first in the array
//     }
//     return arr;
// }

/////////////////////////

// rotate_arr = (arr) =>
// {
//     for(let i=0; i<2; i++)
//     {
//         let last_element = arr.shift();  // shift remove last element from array.                     
//         arr.push(last_element);          // from first to last.
//     }
//     return arr;
// }

let arr = [1,2,3,4,5,6,7,7];

console.log(rotate_arr(arr));

// Note: arr.push() -> add element from last of array
//       arr.pop() ->  remove element from last of array
//       arr.shift() ->  remove element from first element of array
//       arr.unshift() ->  add element from first element of array