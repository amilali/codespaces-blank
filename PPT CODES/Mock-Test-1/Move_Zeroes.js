
move_zero=(arr)=>{
    let i =0;
    for(let j in arr)
    {
      if(arr[j]!=0){
        [arr[j],arr[i]]=[arr[i],arr[j]];
        i++;
      }
    }
    return arr;
}

let arr = [0,1,0,3,12];

console.log(move_zero(arr));