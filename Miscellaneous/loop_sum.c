/* This program reads an integer n from 
standard input, and then scans in n integers 
from standard input, adds them together, 
then prints the sum.
z5309196
Christopher Luong 16/03/2020*/

#include <stdio.h>

int main (void) {
    int amount = 1;
    int sum = 0;
    int counter = 1;
    int num = 1;
    
    printf("How many numbers: ");
    scanf("%d", &amount);
    
    while ( counter < amount + 1) {
        scanf("%d", &num);
        
        sum = sum + num;

        counter++;
    }
    printf("The sum is: %d\n", sum);


    return 0;
}
