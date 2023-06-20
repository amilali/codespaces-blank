// printPrime = (n) =>{
//         if(n<=1)
//         {
//             return false;
//         }
//     for(let i=2; i<=n/2; i++)
//     {
//         if(n%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// now by using recursion

printPrime =(n,i) =>{

    if(n<=1)
    {
        return 0;
    }
    if(i==1)
    {
        return 1;
    }
    if(n%i==0)
    {
        return 0;
    }
    return printPrime(n,i-1);
}



let n = 10;
for(let i=0; i<=n; i++)
{    
if(printPrime(i,Math.floor(i/2)))
{
    console.log(i+" ");
}
}