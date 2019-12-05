Reference by Microsoft visual C++ CLI Step by Step.pdf
======================================================

## Chapter 7

### Task 1
* To: Define a destructor for a class.
* Do this:
  Add a member function that has the same name as the
  class but prefixed with a tildle (~). For example:
  ```cpp
  MyClass::~MyClass() { ... }
  ```

### Task 2
* To: Define a finalizer for a class.
* Do this:
  Add a member function that has the same name as
  the class but prefixed with an exclamation mark (!). For
  example:
  ```cpp
  MyClass::!MyClass() {...}
  ```

### Task 3
* To: Destory a dynamically created object.
* Do this:
  Call **delete** on the handle to the object. For example:
  ```cpp
  MyClass^ m = gcnew MyClass();
  ...
  delete m;
  ```

### Task 4
* To: Create an object with stack semantics.
* Do this:
  Delcare it as you would a build-in type, passing any con-
  structor arguments in parentheses. For example:
  ```cpp
  MyClass m1("argument1");
  ```

### Task 5
* To: Create an object with stack semantics that has no
  arguments.
* Do this:
  Declare it as you would a built-in type, but do not use
  empty parentheses. For example:
  ```cpp
  MyClass m3; // correct
  MyClass m4(); // wrong
  ```

### Task 6
* To: Call methods on objects with stack semantics.
* Do this:
  Use the dot operator. For example:
  ```cpp
  MyClass m5;
  m5.DoSomething();
  ```

### Task 7
* To: Compose an object that might be shared or changed.
* Do this:
  Include them by using handles. For example:
  ```cpp
  ref class Meeting
  {
    Location^ location
	...
  };
  ```

### Task 8
* To: Compose an object whose lifetime is bound to its container.
* Do this:
  Include them by using stack semantics. For example:
  ```cpp
  ref class Rectangle
  {
	Point p1;
	Point p2;
  };
  ```