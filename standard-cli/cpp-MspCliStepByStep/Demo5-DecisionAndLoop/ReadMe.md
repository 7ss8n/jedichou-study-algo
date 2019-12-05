Reference by Microsoft visual C++ CLI Step by Step.pdf
======================================================

## Chapter 5

### Task 1
* To: Perform a one-way test.
* Do this:
  Use the if keyworkd followed by a test enclosed in paren-
  theses. You must enclose the if body in bracs if it contains
  more than one statement. For example:
  ```cpp
  if (n < 0)
  {
     Console::Write("The number ");
     Console::Write(n);
     Console::WriteLine(" is negative");
  }
  ``` 

### Task 2
* To: Perform a two-way test.
* Do this:
  Use an if-else construct. For example:
  ```cpp
  if (n < 0)
  {
    Console::Write("Negative");
  }
  else
  {
    Console::Write("Not negative");
  }
  ```

### Task 3
* To: Perform a multiway test.
* Do this:
  Use an if-else-if construct. For example:
  ```cpp
  if (n < 0)
  {
    Console::Write("Negative");
  }
  else if (n == 0)
  {
    Console::Write("Zero");
  }
  else
  {
    Console::Write("Positive");
  }
  ```

### Task 4
* To: Test a single expression against a finite set of constant
  values.
* Do this:
  Use the switch keyword followed by an integral expression
  enclosed in parentheses. Define case branches for each
  value you want to test against, and define a default
  branch for all other values. Use the break statement to
  close a branch. For example:
  ```cpp
  int dayNumber;  // 0=Sum, 1=Mon, etc.
  ...
  switch (dayNumber)
  {
  case 0:
  case 6:
    Console::Write("Weekend");
    break;
  default:
    Console::Write("Weekday");
    break;
  }
  ```

### Task 5
* To: Perform iteration by using the while loop.
* Do this:
  Use the while keyword followed by a test enclosed in
  parentheses. For example:
  ```cpp
  int n = 10;
  while ( n>=0 )
  {
    Console::WriteLine(n);
    n--;
  }
  ```

### Task 6
* To: Perform iteration by using the for loop
* Do this:
  Use the for keyword followed by a pair of parentheses.
  Within the parentheses, define an initialization expression,
  followed by a test expression, followed by an update
  expression. Use semicolons to separate these expressions.
  For exaple:
  ```cpp
  for (int n = 10; n >= 0; n--)
  {
    Console::WriteLine(n);
  }
  ```

### Task 7
* To: Perform iteration by using the do-while loop.
* Do this:
  Use the do keyword, followed by the loop body, followed
  by the while keyword and the test condition. Terminate
  the loop with a semicolon. For example:
  ```cpp
  int n;
  do
  {
    String^ input = Console::ReadLine();
    n = Convert::ToInt32(input);
  } while (n > 100)
  ```

### Task 8
* To: Terminate a loop prematurely.
* Do this:
  Use the break statement inside any loop. For example:
  ```cpp
  for (int n = 0; n < 1000; n++)
  {
    int square = n * n;
    if (square > 3500)
    {
      break;
    }
    Console::WriteLine(square);
  }
  ```

### Task 9
* To: Abandon a loop iteration and continue with the nex
  iteration.
* Do this:
  Use the continue statement inside any loop. For example:
  ```cpp
  for (int n = 0; n < 1000; n++)
  {
    int square = n * n;
    if (square % 2 == 0)
    {
      continue;
    }
    Console::WriteLine(square);
  }
  ```
