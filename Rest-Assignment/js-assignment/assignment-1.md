**1.Write a function called "addNumbers" that takes two numbers as arguments and returns their sum.**


    // Call the function before it is declared to demonstrate hoisting.
    addNumbers(2, 3);
    
    function addNumbers(a, b) {
      return a + b;
    }

**2. Write a function called "multiplyNumbers" that takes two numbers as arguments and returns their produc**t.


    // Use function expressions to define the function and call the function before it is declared to demonstrate hoisting.
    multiplyNumbers(4, 5);
    
    const multiplyNumbers = function(a, b) {
      return a * b;
    };

**3. Write a function that takes two numbers as arguments and returns their sum.**


    // Declare a variable inside the function using the var keyword and log its value to the console before it is assigned a value to demonstrate variable hoisting.
    function calculateSum(x, y) {
      console.log(sum); // undefined (variable is hoisted but not assigned yet)
      var sum = x + y;
      console.log(sum); // the actual sum
      return sum;
    }
    
    calculateSum(10, 15);

**4. Declare three variables, one using let, one using var, and one using const, all inside a block scope.**


    // Assign them values and log their values to the console before and after they are declared to demonstrate variable hoisting.
    {
      console.log(num1); // ReferenceError (variable is not hoisted)
      console.log(num2); // undefined (variable is hoisted but not assigned yet)
      console.log(num3); // undefined (variable is hoisted but not assigned yet)
    
      let num1 = 10;
      var num2 = 20;
      const num3 = 30;
    
      console.log(num1); // 10
      console.log(num2); // 20
      console.log(num3); // 30
    }
    
**5. Declare a variable using let inside a block scope and attempt to log its value to the console before it is assigned a value to demonstrate the temporal dead zon**e.


    {
      console.log(num); // ReferenceError (variable is not hoisted)
      let num = 5; // variable is declared but not accessible until it is assigned a value
    }
