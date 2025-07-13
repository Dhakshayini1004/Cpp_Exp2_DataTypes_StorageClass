# C++ Experiment 2: To study and implement data types and storage classes.

## Aim

To:
1. Write a C++ program to display "Hello, World!" on the screen.
2. Write a simple calculator program to perform basic arithmetic operations: addition, subtraction, multiplication, and division.

---

## Objectives

- Understand the basic structure of a C++ program.
- Learn to use `cin` and `cout` for input and output.
- Learn to use the keyword 'using namespace'.
- Perform arithmetic operations based on user input.
- Use // to write comments to describe certain steps on a program.

---

## Program Description

### ✅ Part 1: Syntax
- We use the '#include' - the preprocessor directive to include the <iostream> headerfile.
- 'iostream' is used so as to include cin, cout and endl in our program.
- 'using namespace' is a keyword tells the compiler which namespace to use by default, so you don't have to keep typing the namespace prefix (like std::) in front of standard library names.
- We call the main function next, it is the entry point of any program in C++. We generally used the datatype int along with main function.
- 'int' is the return datatype of main. When the scope of function ends, it returns 0.
- 'cin' is the input function while 'cout' is the output.
- If, else are conditional statements that execute a set of insturctions under their scope.
- If the condition is true, the code under if is executed, if false, the code under else part is executed. 

### ✅ Part 2: Hello World and Basic Calculator
- Using 'cout' we print Hello World. To print the next sentence in a new line, we may use "\n" or endl.
- We input 2 floats after defining 2 variables to hold values, using the cin function.
- Along with the input variables, we also define sum,diff,prod,quot.
- We can also use long float to increase the size of prod.
- After assigning each variable an arithematic operation, we print them with cout.

---

## Concepts Used

- Header files (`#include`)
- Input/output streams (`cin`, `cout`)
- Operators (`+`, `-`, `*`, `/`)
- Datatypes(`float`,`long float`)
- Conditional Statements(`if`,`else`)

---

## Sample Output

Hello World
Enter num1 : 22
Enter num_2 : 333
Sum : 355
Difference : -311
Product : 7326
Division : 0.0660661

## Note

While defining variables, we follow a naming convention, variable names can start only with alphabets. However we can use numbers and _ followed by it.
