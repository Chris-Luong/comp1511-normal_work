/* This proram reads an integer n from 
standard input. and prints a pattern of 
asterisks forming a hollow triangle.
z5309196
Christopher Luong 16/03/2020*/

#include <stdio.h>

int main (void) {
    int size = 1;
    
    int row = 1;
    /* User specifies size of triangle*/
    printf("Enter size: ");
    scanf("%d", &size);
    /* Prints left side of triangle*/
    while (row < size + 1) {
        int col = 1;
        //int last = 1;
        while (col < row + 1) {
            if (col == 1) {
                /* Prints the left side of triangle*/
                printf("*");
            } else if (row == size) {
                /* Checks to see if bottom line has 
                been reached*/
                while (col > 1 && col < size + 1) {
                    /* Prints bottom line*/
                    
                    printf("*");
                    col++;
                }
          
            } else if (col != row) {
                /* Prints the space making hollow triangle*/
                printf(" ");
            } else if (col == row) {
                /* Prints the hypotenuse*/
                printf("*");
            }
            col++;
        }
        printf("\n");
        row++;
    }

    return 0;
}
