# Error Handling and Prototypes Assignment

****Type Conversion****
```javascript
function convertToNumber(str) {
  let num = Number(str);
  if (isNaN(num)) {
    return "Invalid number";
  } else {
    return num;
  }
}

```

**Building Robust Functions in JavaScript:**

```javascript
function getPerson(obj) {
  try {
    if (typeof obj !== 'object' || !obj.hasOwnProperty('name') || !obj.hasOwnProperty('age')) {
      throw new Error('Invalid parameter type');
    }
    return `Name: ${obj.name}, Age: ${obj.age}`;
  } catch (error) {
    return error.message;
  }
}

```

**Car Description Class:**
```javascript
class Car {
  constructor(company, model, year) {
    this.company = company;
    this.model = model;
    this.year = year;
  }

  getDescription() {
    return `This is a ${this.year} ${this.company} ${this.model}`;
  }
}

const car = new Car('Tesla', 'Model S', 2022);
console.log(car.getDescription());

```

**Employee Class Challenge:**

```javascript
class Employee {
  constructor(name, position, salary) {
    this.name = name;
    this.position = position;
    this.salary = salary;
  }

  getSalary() {
    return this.salary;
  }
}

const employee = new Employee('John Doe', 'Manager', 5000);
console.log(employee.getSalary());

```

**Implementing a Person Class with Default Values:**

```javascript
class Person {
  constructor(name = 'Unknown', age = 0) {
    this.name = name;
    this.age = age;
  }

  getDetails() {
    return `Name: ${this.name}, Age: ${this.age}`;
  }
}

const person = new Person();
console.log(person.getDetails());

```

**Using Static Method to Add Two Numbers with Calculator Class:**
```javascript
class Calculator {
  static add(a, b) {
    return a + b;
  }
}

const result = Calculator.add(5, 10);
console.log(result);

```
**Password Checker:**
```javascript
class User {
  constructor(username, password) {
    this.username = username;
    this._password = password;
  }

  get password() {
    return this._password.replace(/./g, '*');
  }

  set password(newPassword) {
    if (newPassword.length >= 8 && /[A-Z]/.test(newPassword) && /\d/.test(newPassword)) {
      this._password = newPassword;
    } else {
      console.error('Invalid password');
    }
  }
}

const user = new User('john123', 'password123');
console.log(user.password); // Output: ***********
user.password = 'newPassword';
console.log(user.password); // Output: ***********
user.password = 'weak'; // Invalid password

```

**Adding a Method to a Prototype:**

```javascript
function Student(name) {
  this.name = name;
}

Student.prototype.printDetails = function () {
  console.log(`Hello, my name is ${this.name}`);
};

const student = new Student('Mithun');
student.printDetails();

```

**Check the presence using closures:**
```javascript
function numberChecker(numbers) {
  return function (num) {
    return numbers.includes(num);
  };
}

const checkNumber = numberChecker([1, 2, 3, 4, 5]);
console.log(checkNumber(3)); // Output: true
console.log(checkNumber(6)); // Output: false

```

**Filter by Category:**

```javascript
function filterByCategory(category) {
  return function (products) {
    return products.filter(product => product.category === category);
  };
}

const products = [
  { name: 'iPhone', category: 'Electronics' },
  { name: 'Shirt', category: 'Clothing' },
  { name: 'Book', category: 'Books' },
  { name: 'TV', category: 'Electronics' }
];

const filterProducts = filterByCategory('Electronics');
console.log(filterProducts(products));
// Output: [{ name: 'iPhone', category: 'Electronics' }, { name: 'TV', category: 'Electronics' }]

```