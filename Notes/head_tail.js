let guess = Math.random().toString(10).slice(2,4);

guess > 50 ? console.log("Head"): console.log("tail");


// here toString take 10 -> Decimal 16-> hexadecimal
// and 01 for -> binary value 

// slice() in js work with both array and string 