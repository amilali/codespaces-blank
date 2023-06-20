// usign hashmap

twosum =(arr, target)=>{
    const Hmap ={};
    let rem;
    for(let i in arr)
    {
        rem =target- arr[i];
        if(rem in Hmap)
        {
            return [Hmap[rem], i];
        }
        Hmap[arr[i]] =i;
    }
    return [-1,-1];
}
let arr =[1,2,3,43,5];
console.log(twosum(arr,6))