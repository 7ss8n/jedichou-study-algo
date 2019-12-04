Reference by Microsoft visual C++ CLI Step by Step.pdf
======================================================

## Chapter 4

### Task 1
* To: Decleare a function prototype.
* Do this:
  Specify the return type of the function, followed by the
  function name, followed by the parameter list enclosed in
  parentheses. Remember to include the semicolon at the 
  end of function prototype. For example
  ```cpp
  double MyFunction(int p1, short p2);
  ```

### Task 2
* To: Define default parameters
* Do this:
  Define default parameters in the function prototype,
  if required. Use an = operator, followed by the default
  value.
  ```cpp
  double MyFunction(int p1, short p2=100);
  ```

### Task 3
* To: Define a function body.
* Do this:
  Specify the return type of the function, followed by the
  function name, followed by the parameter list enclosed
  int parentheses. Do not specify default parameters here.
  Define the function body within braces. For example:
  ```cpp
  double MyFunction(int p1, short p2) {
    int n = p1 + p2;
  }
  ```

### Task 4
* To: Return a value from a function
* Do this:
  Use the return keyword, followed by the value that you
  want to return. For example:
  ```cpp
  return (p1+p2) / 2.00;
  ```

### Task 5
* To: Call a function.
* Do this:
  Specify the function name and pass parameter values
  within parentheses. If the function returns a value, your
  can assign it to variable. For example:
  ```cpp
  double result = MyFunction(100, 175);
  ```

### Task 6
* To: Define and use global variables.
* Do this:
  Define the global variable outside of any function. Use
  the variable in any subsequent function in the source file.
  For example:
  ```cpp
  int myGlobal = 0;
  void MyFunction() {
    myGlobal++;
  }
  ```

### Task 7
* To: Define and use overloaded functions.
* Do this:
  Define several functions with the same name but different
  parameter lists. Implement each function. Call the version
  you want, using appropriate parameter values. For example:
  ```cpp
  // Prototypes
  void MyFunction(int p1);
  void MyFunction(double p1, double p2);
  ...
  // Function calls
  MyFunction(100);
  MyFunction(2.5, 7.5);
  ...
  // Function bodies
  void MyFunction(int p1){}
  void MyFunction(double p1, double p2){}
  ```
