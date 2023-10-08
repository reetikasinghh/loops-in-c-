1)Program Aim:
The aim of this program is to print the first 50 natural numbers in ascending order using a loop.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

int main(): This is the entry point of the program. All C++ programs start execution from the main function.

Looping:

The program uses a for loop to iterate through the numbers from 1 to 50.
The loop counter variable 'c' is initialized to 1 and incremented in each iteration.
Inside the loop, the program uses std::cout to print the current value of 'c' followed by a newline to display each number on a separate line.
return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Initialize a variable 'c' to 1.
Start a for loop that runs while 'c' is less than or equal to 50.
Inside the loop, print the current value of 'c' followed by a newline.
Increment 'c' in each iteration.
Terminate the program.
Program Conclusion:
This C++ program uses a for loop to print the first 50 natural numbers in ascending order. It starts from 1 and goes up to 50, printing each number on a separate line. This program serves as a basic example of using loops for repetitive tasks. 

2)Program Aim:
The aim of this program is to print the message "THIS IS MY FIRST PROGRAM" followed by a number (from 1 to 10) to the console ten times.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

int main(): This is the entry point of the program. All C++ programs start execution from the main function.

Declaration of variables:

int i;: Declares an integer variable 'i' to be used as a loop counter.
Looping:

The program uses a for loop to iterate from 1 to 10.
Inside the loop, the program uses std::cout to print the message "THIS IS MY FIRST PROGRAM :" followed by the current value of 'i' and a newline.
'i' is incremented in each iteration.
return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Declare an integer variable 'i' to use as a loop counter.
Start a for loop with 'i' initialized to 1 and running while 'i' is less than or equal to 10.
Inside the loop, print "THIS IS MY FIRST PROGRAM : " followed by the current value of 'i' and a newline.
Increment 'i' in each iteration.
Terminate the program.
Program Conclusion:
This C++ program uses a for loop to repeatedly print a message along with a number from 1 to 10. It demonstrates how loops can be used to perform repetitive tasks and is a basic example of using a for loop. 

3)
Program Aim:
The aim of this program is to print a number triangle where each row contains a sequence of numbers increasing from 0 up to the row number.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int k, i, j;: Declares integer variables 'k' (for the number of rows), 'i' (for the row counter), and 'j' (for the column counter).
int main(): This is the entry point of the program. All C++ programs start execution from the main function.

User input:

The program prompts the user to enter the number of rows ('k') for the triangle.
Looping:

The program uses nested for loops to print the number triangle.
The outer loop (controlled by 'i') runs from 0 to 'k-1', representing each row of the triangle.
The inner loop (controlled by 'j') runs from 0 to 'i-1', printing the value of 'i' 'j' times.
cout << i;: Inside the inner loop, the program prints the value of 'i' (the row number) in each column.

cout << endl;: After each row is printed, the program moves to the next line to start a new row.

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter the number of rows for the number triangle ('k').
Start an outer for loop with 'i' initialized to 0 and running while 'i' is less than 'k'.
Inside the outer loop, start an inner for loop with 'j' initialized to 0 and running while 'j' is less than 'i'.
Inside the inner loop, print the value of 'i'.
Move to the next line after the inner loop to start a new row.
Increment 'i' in each iteration of the outer loop.
Terminate the program.
Program Conclusion:
This C++ program takes a user-defined number of rows and prints a number triangle where each row contains a sequence of numbers from 0 to the row number. It uses nested for loops to control the printing of numbers in each row. The program serves as an example of using nested loops for pattern printing.

Example Output (for k=5): 
![image](https://github.com/reetikasinghh/loops-in-c-/assets/139485681/34c44873-25c3-4aff-bd2c-71da265e0fce)
