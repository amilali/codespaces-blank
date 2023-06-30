# JS Errors

### Learn this with "SRT"
- Syntax error
- Reference Error
- Type Error

## Syntax Error
**Breaking the Rule of language**
 E.g:
 ```javascript
console.log("Hello, world!"
```
here we did not use ");" SO, it is syntax error.

## Refrence Error
**A reference error in JavaScript occurs when you try to use a variable or function that has not been declared or is out of scope.**
Just like we use let and const in hoisting it become out of scope when it hosted it lies inside TDZ (Temporial Dead Zone).
E.g:
```javascript
console.log(message);
//  here we try to initialize the variable without even declared
```
## Type Error

**When you confuse the js intrepreter while working with different type**
E.g:
```javascript
let  arr - [1,2,3,4,5];
console.log(arr.split(""));
// here we use string method .split() in array so it through type error like this:
// Uncaught TypeError: arr.split is not a functionat <anonymous>:1:40
```

### Funfact 
**NaN is considered as Number in JS**