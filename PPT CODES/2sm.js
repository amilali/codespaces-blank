twosum = (arr,k)=>{
        let mp ={};
        for(let i in arr)
        {
            let rem = k-arr[i];
            if(mp.hasOwnProperty(rem))
            {
                return [mp[rem], i];
            }
            mp[arr[i]] =i;
        }
        return [-1,-1];
}





let arr  = [1,2,3,4,5,6];

console.log("index :",twosum(arr,11));