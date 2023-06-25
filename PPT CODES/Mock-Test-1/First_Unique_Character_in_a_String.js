// var firstUniqChar = function(s) {
//     for(let i in s)
//     {
//         let c=0;
//         for(j in s)
//         {
//             if(s[i]==s[j])
//             {
//                 c++;
//             }
//         }
//         if(c==1)
//         {
//             return i;
//         }
//     }
//     return -1;
// };

firstUniqChar=(str)=>{
    let mp ={};
    str=str.split("");
    for(let i in str)
    {
        if(str[i] in mp)
        [
            mp[str[i]] = 2
        ]
        else{
            mp[str[i]] = 1
        }
    }
    for(let i in str){
        if((str[i] in mp) ==1)
        {
            return i;
        }
    }
    return -1;
}
// optimise

var firstUniqChar = function(str) {
    let mp ={};
     str=str.split("");
     for(let i in str)
     {
         if(str[i] in mp)
         [
             mp[str[i]] = 2
         ]
         else{
             mp[str[i]] = 1
         }
     }
     for(let i in str){
         if(mp[str[i]] === 1)
         {
             return i;
         }
     }
     return -1;
 };

 
let string ="leet code";
console.log(firstUniqChar(string));