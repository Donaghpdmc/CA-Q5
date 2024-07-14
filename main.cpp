#include "mbed.h"

/*Write a program to print the total number of button presses PC_13 using the printf statement.
The message can be printed after every time the button is pressed.*/


// main() runs in its own thread in the OS

InterruptIn bluebtn(BUTTON1);

int Press_0 = 0;
int Press_1 = 1;
int Press_x = Press_0 + Press_1;

int main()
{   printf("Number of Button Presses = %d,\r\n", Press_x);


    while (true) {

    }
}

