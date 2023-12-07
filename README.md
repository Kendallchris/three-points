# Three Points Lab Assignment


## Goal
Your assignment is to write a C++ program that will read three points and will determine if the points represent a line or a triangle, the program will output information about the line or triangle depending the case.  This project will help you practicing:
* C++ editing, running and debugging
* ID, variables, types
* Functions
* Control structures

## Sample Run

```
Input Point 1: 2 1
Input Point 2: 3 4
Input Point 3: 5 1
A Triangle
Sides:
  3.16
  3.61
  3.00
Angles:
  0.98
  1.25
  0.91
Perimeter:   9.77
Area:        4.50

```

## Detailed Explanation
When you run the program, it will ask the user to input three points. The program then will check whether the points form a line or a triangle.
* If the points make up a line the program will output:
  * The slope of the line
  * The length of the segment formed by the three points
* If the points make up a triangle the program will output:
  * The length of the sides
  * The interior angles
  * The triangle perimeter
  * The triangle area
* The points may form a vertical line, in which case you must only output: Infinite Slope and exit the program.

Your program should output the exact same format as it is shown in the sample runs section of this document. The assessment of this activity will be done automatically, and the script will check if your output matches exactly the output of the given cases.

## Extra Credit

* Calculate correctly when there are vertical lines in your program without exiting.
* Show the angles in degrees also.

## Functions to Write

Function Declaration | Description
---------------------|-------------
`double Slope(double, double, double, double)` | Calculates the slope of the line defined by the two points that the function takes as parameter.
`double Length(double, double, double, double)` | Calculates the length of the segment defined by the two points taken as parameter.
`double Area(double, double, double)` | Calculates the area of a triangle defined by the lengths of its sides.
`double Perimeter(double, double, double)` | Returns the perimeter of a triangle defined by the lengths of its sides.
`double Angle(double, double, double)` | Calculates the interior angle opposite to the length of the first parameter. The three parameters represent the length of the sides.

You may write additional functions, but **you must** write the aforementioned functions.

## Error Handling

Your program should not crash on any numerical input. In this assignment there will not be mal formatted input tests (i.e. input strings where numbers are expected), however in later assignments there will be.

Here’s how it should look when you run with points (1, 2), (2, 4) and (5, 2):
```
Input Point 1: 1 2
Input Point 2: 2 4
Input Point 3: 5 2
A Triangle
Sides:
  2.24
  3.61
  4.00
Angles:
  0.59
  1.11
  1.45
Perimeter:   9.84
Area:        4.00

```

## Program Style
Your program needs to be orderly and readable.  If you are working a development team and don’t write clean looking code, you will be unpopular among your colleagues and may not work on that team very long.

Variables should be given descriptive names that start with a lowercase letter and obey the camelCase convention.

**Do not use Global Variables**: Global variables sometimes are appropriate, but not in the assignments we will be giving this quarter.

Functions should be given descriptive names that start with an uppercase letter and obey the CamelCase convention.  First word of a function name typically should be a verb.

At the start of your file you should have a header comment that gives the title of the assignment, the purpose, and your name.  Here is an example of what that could look like:

```
/*
    Title:      Lab 1 – threepoints.cpp
    Purpose:    read three points and determine if they form a line or triangle
    Author:     John Johnson
    Date:       October 14 2019
*/

```

Each subordinate function should also start with a header that describes what it does, it’s parameters, what it returns, and how errors are handled.  Here is an example:

```
// Calculates the area of the triangle
// Params: three doubles that represent the length of each of the triangles
// sides
// Returns: a double, the area of the sides
// Format Error: there should be no errors
```

You should include additional comments in your code to describe what you are doing.   If it is hard to understand what a variable is for, add a comment after it.   It possible, though, to put in too many comments, so be judicious and make sure you have time left to do well in your other classes when it comes to commenting.

You should adopt a consistent style for how you format your curly braces {}.   Do it the same way throughout your file.  Make sure you indent lines properly.

## Submitting your code
Your solution should be contained within a single C++ file, and it must be named “threepoints.cpp”.

Before submitting, make sure that you test all the examples values and that you get the output exactly like the one presented in the examples.

Your code needs to be submitted through GitHub Classroom, before the deadline you will need to push your last version of your program. As a good programming practice remember to commit frequently and to push every time you have a functioning version of your code.0

## Grading
Correctness is essential.  Make sure your solution builds as described above and correctly handles the test cases given in this lab.  We will test on other input values as well. Your code must compile and should not have runtime errors (crash).

Even if your solution operates correctly, points will be taken off for:
- Not following the design described above
- Not adhering to style guidelines described above
- Using techniques not presented in class
- Programming error not caught by other testing
- Not following good programming practices (Check good programming practices on Canvas)

### Academic Integrity
This programming assignment is to be done on an individual basis. At the same time, it is understood that learning from your peers is valid and you are encouraged to talk among yourselves about programming in general and current assignments in particular.  Keep in mind, however, that each individual student must do the work in order to learn.  Hence, the following guidelines are established:
- Feel free to discuss any and all programming assignments but do not allow other students to look at or copy your code. Do not give any student an electronic or printed copy of any program you write for this class.
- Gaining the ability to properly analyze common programming errors is an important experience. Do not deprive a fellow student of his/her opportunity to practice problem solving: control the urge to show them what to do by writing the code for them.
- If you’ve given the assignment a fair effort and still need help, see the instructor or a lab assistant.
- **If there is any evidence that a program or other written assignment was copied from another student, neither student will receive any credit for it. This rule will be enforced.**
- **If there is any evidence that a program or other written assignment was copied from any source (i.e. Internet), the student will receive no credit. This rule will be enforced.**
- Protect yourself: Handle throw-away program listings carefully, keep your repository private.

Refer to the ECS Department Policy on Academic Integrity that is included in the class syllabus.

## Grading Rubric Summary
The following aspects are going to be consider during grading. Make sure you comply with all of them.
- The program compiles (there will be no partial credit for programs that do not compile)
- Provides the correct output for the test cases
- Catches errors gracefully, the program does not crash on incorrect input
- The program outputs the information in the specified format
- The program identifies lines correctly
- The program identifies triangles correctly
- The program calculates length correctly
- The program calculates area, perimeter and interior angles correctly
- The program follows the good programming practices discussed in class
- The assignment follows all the instructions
- In general the program does not crash

## Sample Runs

### Example 1
```
Input Point 1: 2 1
Input Point 2: 2 4
Input Point 3: 5 1
Infinite Slope

```

### Example 2
```
Input Point 1: 2 1
Input Point 2: 3 4
Input Point 3: 5 1
A Triangle
Sides:
  3.16
  3.61
  3.00
Angles:
  0.98
  1.25
  0.91
Perimeter:   9.77
Area:        4.50

```


### Example 3
```
Input Point 1: 2 1
Input Point 2: 3 4
Input Point 3: 4 7
A Line
Slope:    3.00
Length:   6.32

```


### Example 4
```
Input Point 1: 2 1
Input Point 2: 4 7
Input Point 3: 3 4
A Line
Slope:    3.00
Length:   6.32

```


### Example 5
```
Input Point 1: 2 0
Input Point 2: 10 0
Input Point 3: 6 8
A Triangle
Sides:
  8.00
  8.94
  8.94
Angles:
  0.93
  1.11
  1.11
Perimeter:  25.89
Area:       32.00

```


### Example 6
```
Input Point 1: 1 2
Input Point 2: 1 5
Input Point 3: 2 3
Infinite Slope

```
