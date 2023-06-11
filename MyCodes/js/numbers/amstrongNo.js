function checkams(n)
{
  let temp =n;
  let  sum=0;
  let y  = n.toString().length; // we are using toString() fn coz it is integer number we can not  find the length of it.

while(n!=0)
  {
    let rem = n%10;
    sum = sum + Math.pow(rem,y);
    n=Math.floor(n/10); //  Math..floor() is imp here coz without using it return decimal value .
  }
    if(temp === sum)
    {
      return true;
    }
  return false;
}

let a = prompt("Enter any number"); //  Note->  prompt() fn take input from console as  a "STRING" value  we have to convert into  integer ny  using  "parseInt()"  function.


if(checkams(parseInt(a))) //  as you can see  use parseInt() here.
{
  console.log("Yes", a ,"is Amstrong Number");
}
else{
  console.log("it is not");
}
