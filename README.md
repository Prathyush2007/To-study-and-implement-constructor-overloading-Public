To Study and Implement Constructor Overloading

Name: Prathyush Nimmagadda
PRN: 24070123064
Batch: ENTC A3

Overview

In C++, overloading is a key feature of polymorphism, where the same function or operator can be used in different ways depending on the number or types of parameters.

Constructor Overloading: A class can have multiple constructors with different parameter lists, allowing objects to be initialized in various forms.

Function Overloading: Same function name but different parameter lists.

Operator Overloading: Redefining operators (+, -, *, /) so they work with user-defined classes.

This experiment covers constructor overloading, function overloading, and operator overloading through practical examples.

1. Addition using Constructor Overloading

Demonstrates constructor overloading with multiple parameter lists.

One constructor adds two integers, another adds two floats, and a third adds three integers.

This shows how constructors can handle different data types and argument counts.

Output:
Enter two integers: 2
3
Enter two floats: 4.1
5.44
Enter three integers: 3
2
9

Results:
Integer Sum (2 numbers) = 5
Float Sum = 9.54
Integer Sum (3 numbers) = 14

2. Rectangle Area using Constructor Overloading

Demonstrates constructor overloading with int, float, and double.

First constructor calculates the area of a rectangle.

Second constructor calculates the perimeter of a rectangle.

Third constructor checks if the given dimensions form a Square or a Rectangle.

Output:
Area: 50
Perimeter: 32
This is a Square

3. Function Overloading

Demonstrates function overloading with the add() function.

Works for both integers and floats, depending on parameter types.

Same function name, but different argument lists.

Output:
Integer Sum: 15
Float Sum: 8

4. Operator Overloading Calculator

Demonstrates operator overloading for arithmetic operators (+, -, *, /).

A class Calc is defined, and each operator is redefined to perform operations on objects.

Every operation returns a new object holding the result.

Output:
Sum: 24
Difference: 16
Product: 80
Quotient: 5

5. Operator Overloading for Complex Numbers

Demonstrates operator overloading for subtraction (-).

A class Complex is created to represent complex numbers.

The - operator is redefined to subtract two complex numbers.

Output:
15 + i8
