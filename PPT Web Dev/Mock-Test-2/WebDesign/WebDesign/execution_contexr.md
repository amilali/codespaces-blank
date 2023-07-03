# How JavaScript works?
Everything in JavaScript happens inside an "**Execution context**".

## **Execution context**
An execution context is an abstract concept of an environment where the Javascript code is evaluated and executed. Whenever any code is run in JavaScript, it's run inside an execution context.

**Execution context has two component**
**1) Memory component
 OR  [Variable environment] **
-This is the place where all variables and functions are stored as key value pairs. Eg: {key: value ||  n:2;} .

** 2) Code component OR [Thread of execution]**
-This is the place where code is executed one line at a time

**Note-** JavaScript is a synchronous single-threaded language:
at a time and when i say synchronous single threaded that means that
javascript can only execute one command at a time and in a specific order okay so, that means that it can only go to the next line once the current line has been finished executing so that means synchronous single threaded language.


**So, the entire execution happens in two phases as follows
Phase 1 🕐:**
 Memory allocation phase- all the variables  and functions get their memory allocated in the memory with undefined and the entire code of function respectively. 

**Phase 2 🕑:**
Code execution phase - in this phase  thread execution happens and all the variables get their actual values which were assigned to them and as function is invoked, a new execution environment gets created in the code part, and again there are two phases, memory allocation phase and code execution phase. And the cycle repeats.


