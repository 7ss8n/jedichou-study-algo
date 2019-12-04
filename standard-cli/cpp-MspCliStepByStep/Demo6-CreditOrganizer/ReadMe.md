Reference by Microsoft visual C++ CLI Step by Step.pdf
======================================================

## Chapter 6

### Task 1
* To: Define a class.
* Do this:
  Add a header file to your project. Define the class in the
  header file. For example:
  ```cpp
  ref class MyClass
  {
  public:
    void MyFunction();
  private:
    int myData;
  }
  ```

### Task 2
* To: Implement a class.
* Do this:
  Add a source file your project. In the source file, use a
  #include statement to include the header file that contains
  the class definition. Then implment the member
  functions in the source file. For example:
  ```cpp
  #include "MyHeader.h"
  void MyClass::MyFunction()
  {
    myData = myData * 2;
  }
  ```

### Task 3
* To: Provide a constructor for a class
* Do this:
  Declare the constructor in the header file, and implement
  it in the source file. The constructor must have the same
  name as the class and cannot return a value. However, a
  constructor can take parameters. For example:
  ```cpp
  // Header file
  ref class MyClass
  {
  public:
    MyClass(int n);
	...
  };
  // Source file
  MyClass::MyClass(int n)
  {
    myData = n;
  }
  ```

### Task 4
* To: Create instances of a class
* Do this:
  Create an object by using **gcnew** keyword, passing
  parameters into the constructor, if necessary. Assign the
  resulting handle to a variable of the appropriate type. For
  example:
  ```cpp
  MyClass^ myObject;
  myObject = gcnew MyClass(100);
  myObject->MyFunction();
  ```

### Task 5
* To: Define class-wide (static) data members.
* Do this:
  Declare the data member by using the **static** keyword,
  initializing it, if appropriate. For example:
  ```cpp
  ref class MyClass {
  private:
    static int myClassData = 0;
	...
  }
  ```

### Task 6
* To: Define and use class-wide (static) member functions.
* Do this:
  Declare the member function by using the **static**
  keyword. Implement the member function in the
  source file. Call the function by using the syntax
  **ClassName::FunctionName**. For example:
  ```cpp
  // Header file
  ref class MyClass {
  public:
    static void MyClassFunction();
  }
  // Source file
  void MyClass::MyClassFunction() {
    myClassData++;
  }
  // Client code
  MyClass::MyClassFunction();
  ```

### Task 7
* To: Define relationships between classes.
* Do this:
  Define all the required classes and use handles to denote
  relationships between objects. For example, if an instance
  of class A needs to point to an instance of class B, use the
  following:
  ```cpp
  ref class B {};
  ref class A {
  private:
    B^ HandlerToB;
  };
  ```