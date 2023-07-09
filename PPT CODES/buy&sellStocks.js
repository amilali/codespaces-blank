/*
💡 Question 2

You are given an array prices where prices[i] is the price of a given stock
on the ith day.
You want to maximize your profit by choosing a single day to buy one stock
and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you
cannot achieve any profit, return 0.
Example :
Input: prices = [7,1,5,3,6,4]
Output: 5

*/


// brute force apprach for  this problem
// buy_sell =(arr)=>{
//     let n = arr.length;
//     let max_profit=Number.MIN_VALUE;
//     for(let i=0; i<n; i++)
//     {
//         for(let j=i+1; j<n; j++)
//         {
//             if(max_profit<arr[j]-arr[i])
//             {
//                 max_profit = arr[j]-arr[i];
//             }
//         }
//     }
//     return max_profit;
// } //O(n^2)

/// optimal approach

buy_sell =(arr)=>{
    let max_profit=Number.MIN_VALUE;
    let min_purchase = arr[0];

    for(let i in arr)
    {
        max_profit = Math.max(arr[i]-min_purchase, max_profit);
        min_purchase = Math.min(arr[i], min_purchase);
    }
     
    return max_profit;
} //  O(n)

let prices = [7,1,5,3,6,4]
console.log(buy_sell(prices));
