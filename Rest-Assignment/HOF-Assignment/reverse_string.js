// Function to reverse a string
function reverseString(str) {
    return str.split('').reverse().join('');
  }
  
  // Delayed reverse function
  function delayedReverseString(input) {
    setTimeout(function() {
      var reversed = reverseString(input);
      console.log(reversed);
    }, 2000);
  }
  
  // Example
  var input = "Hello, world!";
  delayedReverseString(input);
  console.log("Waiting for the string to be reversed...");
  