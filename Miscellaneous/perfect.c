/* This program reads a positive integer 
and prints all factors of integer, their sum
and indicates whether it is a perfect number
Christopher Luong z5309196
03/03/2020
*/

#include <stdio.h>

int main (void) {

    int num = 0;
    int fac = 1;
    int sumFac = 0;
    
    printf ("Enter number: ");
    scanf ("%d", &num);
    printf ("The factors of %d are: \n", num);
    
    while (fac < num + 1) {
        
        if (num % fac == 0) {
            printf ("%d\n", fac);
            sumFac = sumFac + fac;
            
        }
       
        fac++;
    }
    printf("Sum of factors = %d\n", sumFac);
    if (sumFac - num == num) {
        printf("%d is a perfect number\n", num);
    }else {
    printf("%d is not a perfect number\n", num);
    }
    return 0;
}
