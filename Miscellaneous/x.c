/* This program reads an integer n from standard input, 
and prints an nxn pattern of asterisks and dashes 
in the shape of an "X". 
z5309196 Christopher Luong
08/03/2020 */

#include <stdio.h>
int main(void) {
    int i = 1;
    int row = 1;
    
    // User enters integer determining the number of rows   
    printf("Enter size: ");
    scanf("%d", &i);
    // Prints i columns
    while (row < i + 1) {
        int col = 1;
        
        // Prints 'i' amount of characters
        while (col < i + 1) {
            // Prints "*" from left to right going down
            // i.e. the left arm of the "X"
            if (col == row) {
                printf("*");
                // Prints "*" from right to left going down
                // i.e. the right arm of the "X"
            } else if (col == i + 1 - row) {
                printf("*");
            
                // Prints the other characters as dashes
            } else {
                printf("-");
            
        
            }
            col++;
        }
        
        printf("\n");
        row++;
    }
    
    



    return 0;
}
