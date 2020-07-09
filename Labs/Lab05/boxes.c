//This program reads in a number and then 
//draws that many square boxes inside each 
//other using the integer 1.
//z5309196 Christopher Luong 22/03/2020

#include <stdio.h>

int main (void) {

    int amount = 1;
    printf("How many boxes: ");
    scanf("%d", &amount);

    int maxSize = amount * 4 - 1;
    
    int row = 1;
    int col = 1;

    while (row <= maxSize) {
        while (col <= maxSize) {
            if (col > row - 1 && col <= maxSize -row + 1
            && row % 2 == 0 && row <= 2 * amount) {
                printf("0");
            } else if (col <= row  && col > maxSize -row
            && row % 2 == 0 && row > 2 * amount) {
                printf("0");
            } else if (row > col - 1 && row <= maxSize -col + 1
            && col % 2 == 0 && col <= 2 * amount) {
                printf("0");
            } else if (row <= col && row > maxSize -col 
            && col % 2 == 0 && col > 2 * amount) {
                printf("0");
            } else {
                printf("1");
            }     
            col++;
        }
        
        col = 1;
        printf("\n");
        row++;
    } 

    return 0;
}
