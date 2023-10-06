/*QUES: WRITE A PROGRAM TO PRINT THE FIRST 50 NUMBERS USING LOOPS */
#include <iostream>
int main() {
    // Initialize a variable 'c' to 1
    for (int c = 1; c <= 50; c++) {
        // Output the current value of 'c' followed by a newline
        std::cout << c << std::endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
/* OUTPUT
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
38
39
40
41
42
43
44
45
46
47
48
49
50
*/


// WRITE A PROGRAM TO PRINT SOMETHING 10 TIMES 
#include <iostream>

int main() {
    // Declare an integer variable 'i' to use as a loop counter
    int i;

    // Start a 'for' loop with 'i' initialized to 1
    // and incrementing 
    for (i = 1; i <= 10; i++) {
        // Output "THIS IS MY FIRST PROGRAM :" followed by the current value of 'i' and a newline
      
        std::cout << "THIS IS MY FIRST PROGRAM : " << i << std::endl;
    }

    // The loop has finished executing,
    //so the program returns 0 
    return 0;
}
/* OUTPUT : 
THIS IS MY FIRST PROGRAM : 1
THIS IS MY FIRST PROGRAM : 2
THIS IS MY FIRST PROGRAM : 3
THIS IS MY FIRST PROGRAM : 4
THIS IS MY FIRST PROGRAM : 5
THIS IS MY FIRST PROGRAM : 6
THIS IS MY FIRST PROGRAM : 7
THIS IS MY FIRST PROGRAM : 8
THIS IS MY FIRST PROGRAM : 9
THIS IS MY FIRST PROGRAM : 10*/


// WAP TP PRINT A NUMBER TRIANGLE 
#include <iostream>
using namespace std; 
int main() {
    int k, i, j;

    // enter the number of rows for the triangle
    cout << "Enter the number of rows: ";
    cin >> k;

    // Outer loop to control the number of rows
    for (i = 0; i < k; i++) {
        // Inner loop to print the value of 'i' 'j' times, where 'j' ranges from 0 to 'i-1'
        for (j = 0; j < i; j++) {
            cout << i;
        }

        // Move to the next line to start a new row
        cout << endl;
    }

    // Return 0 to indicate successful program execution
    return 0;
}
/*
Enter the number of rows :6

1
22
333
4444
55555
*/
} 
