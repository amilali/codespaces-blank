let a = "I Love You";
let b = "You Love i";

console.log(checkAnagram(a, b));


function checkAnagram(a, b) {
  let n = a.length
  let n1 = b.length

  if (n != n1)
    return false;

  a = a.split("").sort().join(""); // we can not directly use sort() function in js for string 
  //we have to change into array for using that function to use that function i.e  .split() function  to change into array.
  b = b.split("").sort().join("");
  if (a != b)
    return false;

  return true;
}
