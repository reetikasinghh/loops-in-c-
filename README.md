Program Aim:
The aim of this program is to determine and display the sizes (in bytes) of different data types in C++, including integers, floats, doubles, characters, and booleans.

Program Theory:

#include<iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

int main(): This is the entry point of the program. All C++ programs start execution from the main function.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int myintvar;: Declares an integer variable to store whole numbers.
float myfloatvar;: Declares a float variable to store numbers with decimals.
double mydoublevar;: Declares a double variable to store larger numbers with decimals.
char mycharvar;: Declares a character variable to store single letters or symbols.
bool myboolvar;: Declares a boolean variable to store true or false values.
cout and cin statements: These statements are used to display prompts to the user and read values from the user for each variable.

Displaying the sizes of data types: The program uses the sizeof operator to determine and display the sizes of data types in bytes.

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Declare variables for each data type: integer, float, double, character, and boolean.
Prompt the user to enter values for each data type.
Read the user's input for each variable.
Use the sizeof operator to determine and display the size of each data type in bytes.
Program Conclusion:
This C++ program demonstrates how to determine and display the sizes of different data types in bytes. It prompts the user to enter values for each data type and then calculates and displays the size of each data type. The size of a char variable is always 1 byte, while the sizes of other data types may vary depending on the system and compiler used.
Program Aim:
The aim of this program is to print the numbers from 1 to 50, each on a new line, using a for loop.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

int main(): This is the entry point of the program. All C++ programs start execution from the main function.

Initialization of a loop variable: for (int c = 1; c <= 50; c++) initializes an integer variable c to 1. It then specifies a for loop that will execute as long as c is less than or equal to 50. The loop will increment c by 1 in each iteration.

std::cout << c << std::endl;: Inside the loop, this statement outputs the current value of c followed by a newline character (std::endl). This causes each number to be printed on a new line.

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Initialize an integer variable c to 1.
Execute a for loop as long as c is less than or equal to 50.
Inside the loop, print the current value of c followed by a newline.
Increment c by 1 in each iteration.
Terminate the program.
Program Conclusion:
This C++ program uses a for loop to iterate through the numbers from 1 to 50 and prints each number on a new line. It serves as a simple example of how loops can be used to perform repetitive tasks in programming.

Program Aim:
The aim of this program is to print a number triangle where each row contains a repeated number based on the row number.

Program Theory:

#include <iostream>: This line includes the necessary header file <iostream> to enable input and output operations in the program.

int main(): This is the entry point of the program. All C++ programs start execution from the main function.

using namespace std;: This line allows us to use the standard C++ library (std) without explicitly specifying it in the code. It simplifies the code by eliminating the need to prefix elements from the standard library with "std::".

Declaration of variables:

int k, i, j;: Declares integer variables to control the number of rows (k), the current row number (i), and the inner loop counter (j).
cout and cin statements: These statements are used to display a prompt to the user and read the number of rows for the triangle.

Nested loops: There are two nested loops used:

The outer loop (for (i = 1; i <= k; i++)) controls the number of rows in the triangle.
The inner loop (for (j = 0; j < i; j++)) prints the value of i (i times) on each row.
cout << endl;: This statement moves to the next line to start a new row in the triangle.

return 0;: This statement indicates the successful termination of the program with a return value of 0.

Program Algorithm:

Prompt the user to enter the number of rows (k) for the triangle.
Use an outer loop to iterate from 1 to k, controlling the number of rows.
Inside the outer loop, use an inner loop to iterate from 0 to i-1, where i is the current row number. This inner loop prints the value of i on the row.
After the inner loop completes, move to the next line to start a new row.
Repeat steps 3-4 until all rows are printed.
Terminate the program.-
