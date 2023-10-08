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