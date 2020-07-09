//Prints the first n digits of pi, where n is specified 
//z5309196 Christopher Luong 10/03/2020

#include <stdio.h>

#define MAX_DIGITS 10

void print_pi (int piArray[], int digits);

int main(void) {
    int pi[MAX_DIGITS] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
    int digits = 0;
    
    
    printf("How many digits of pi would you like to print? ");
    scanf("%d", &digits);
    print_pi(pi, digits);
    return 0;
}

void print_pi (int piArray[], int digits) {
    int i = 0;
    while (i < digits  && digits <= MAX_DIGITS) {
    
        printf("%d", piArray[i]);
        if (i == 0 && digits > 1) {
            printf(".");
        }
    
        i++;
    }
    printf("\n");

}

