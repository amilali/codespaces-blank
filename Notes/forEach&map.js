let arr = new Array();

arr = [11,32,44,55,65,78];
// arr.forEach((e,i,a)=>{
// console.log(e);
// });

// where e is Element
// & i is index
// & a is array
// element, index , array <- this order is important
// Note : forEach did not return anything it return undefine.



//map

let newarr = arr.map((e)=>{
    return e*2;
});
console.log(newarr);


// map fn is return the copy of array while forEach did not do
//  this is the basic difference between them.

//map return new array  and forEach  did not return any thing it return undefine;