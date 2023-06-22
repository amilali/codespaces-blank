twosum = (arr,k)=>{
        let mp ={};
        for(let i in arr)
        {
            let rem = k-arr[i];
            if(mp.hasOwnProperty(rem)) // you can also use "in"
            // like if(rem in arr)
            {
                return [mp[rem], i];
            }
            mp[arr[i]] =i;
        }
        return [-1,-1];
}
// you can use .map or .forEach
// twosum = (arr, k) => {
//     let mp = {};
//     let a = new Array(-1,-1);
//   arr.map((num, index) => {
//       let rem = k - num;
//       if (rem in mp) {
//         a = [mp[rem], index];
//       }
//       mp[num] = index;
//     });
//     return a;
//   };
  

let arr  = [1,2,3,4,5,6];

console.log("index :",twosum(arr,11));