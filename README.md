# Loop-Based C++ Programs

Name: Pal Jain

PRN: 24070123067

Class: ENTC A3

Title: For and while loop


# Loop-Based C++ Programs: Theory, Algorithms, Output & Explanation
This repository contains detailed explanations of loop concepts in C++, followed by examples of programs based on for and while loop and also includes programs related pattern printing which includes the concept of loops only.

# Loops in C++
Loops are used to execute a block of code repeatedly until a condition is met. They are essential for tasks such as iterating over arrays, automating repetitive logic, or building interactive programs.

# Types of Loops
# 1. For Loop
Used when the number of iterations is known beforehand.
Combines initialization, condition checking, and increment/decrement in a single line.

for(initialization; condition; increment) {
    // body of loop
}

# 2. While Loop
Used when the number of iterations is not known.
The condition is checked before the loop body is executed.

while(condition) {
    // body of loop
}

# 3. Do-While Loop
Ensures that the loop body executes at least once.
The condition is checked after the loop body.

do {
    // body of loop
} while(condition);

# Program Analysis
# 1. Print 'SIT' 5 times
Theory: Demonstrates a simple for loop which print "SIT" 5 times each in new line.

Algorithm:

Initialize a counter from 0.
Run the loop till counter < 5.
Print "SIT" in each iteration.
Output:

SIT
SIT
SIT
SIT
SIT


# 2. Print Even numbers from 0 to 10
Theory: Uses conditional logic and controlled incrementing inside the loop and printseven numbers from 0 to 10.

Algorithm:

Start a counter from 0.
Run loop until counter <= 10.
Print counter if even.
Increment by 2 each iteration.
Output:

0
2
4
6
8
10


# 3. Validating password from user by while loop.(a working login page)
Theory: This program demonstrates user input validation and multiple loop exits by taking input from user validating via "if condition" .

Algorithm:

Take PRN and password input.

Loop to check password match.

If wrong, display menu:

Retry
Change Password
Forgot Password
Exit
Proceed based on user's choice.

Output:

Welcome to MOODLE software.
Enter your PRN (numbers only): 24070123067
Set your password (numbers only): 15792468
Enter your password to login: 6574832

Incorrect password!
--- MENU ---
1. Retry login
2. Change password (requires old password)
3. Forgot password
4. Exit
   
Enter your choice: 1
Enter your password to login: 12345678

Login successful! Welcome to your portal.


# 4. Print Digits in reverse order of a number
Theory: Uses for loop with modulus and division to reverse digits and print them in new line each based on number.

Algorithm:

Input a number.

While number > 0:

Get last digit using %10.
Print digit.
Divide number by 10.
Output:

Enter num:
23069
9
6
0
3
2


# 5. Nested for Loop
Theory: Demonstrates nested loop control which shows how outer loop runs first for first iteration then moves to inner loop and moves back to outer one.

Algorithm:

Outer loop runs 2 times.
Inner loop runs 3 times per outer loop iteration.
Print values of outer and inner loop counters.
Output:

Outer:1
Inner:1
Inner:2
Inner:3
Outer:2
Inner:1
Inner:2
Inner:3


# 6.Printing Left Aligned Star pattern
Theory: Builds a basic triangle shape using stars and prints them left aligned .

Algorithm:

Outer loop for rows from 1 to 5.
Inner loop prints * equal to current row number.
Output:

*
**
***
****
*****


# 7. Printing Right Aligned Star pattern
Theory: Combines spacing and star printing for alignment and aligns pattern right side.

Algorithm:

Outer loop for rows.
First inner loop prints spaces.
Second inner loop prints stars.
Output:

    *
   **
  ***
 ****
*****


# 8. Floyds Series
Theory: This program prints numbers in ascending order as per the series each in new line using nested for loop.

Algorithm:

Use nested loops.
Keep a counter starting from 1.
For each row, print increasing numbers.
Output:

1
2 3
4 5 6
7 8 9 10


# 9. HourglassPattern.cpp
Theory: This program prints a symmetric hourglass pattern with the help of teo for loops each used to print the upward and downward triangle respectively.

Algorithm:

First loop for decreasing rows:

Print spaces then stars.
Second loop for increasing rows:

Print spaces then stars.
Output:

* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *


# Conclusion
Loops form the backbone of repetitive logic in C++ and are used in everything from simple pattern generation to real-world applications like authentication systems. Understanding their behavior, syntax, and flow helps in writing efficient and structured programs. This collection of loop programs demonstrates a range of use cases to help strengthen conceptual clarity and hands-on coding skills.
