/* This program reads integers line by line, 
and when it reaches the end of input, 
prints those integers in reverse order, line by line. 
z5309196 Christopher Luong 10/03/2020*/


#include <stdio.h>

#define MAX_NUM 100

int read_inputs(int num[MAX_NUM]);

int main (void) {

    int num[MAX_NUM] = {0};
    /*int num = 0;
    int amount = 0;
    int i = 0;*/
    
    printf("Enter numbers forwards:\n");
    read_inputs(num);
    
    return 0;
    
    
}

int read_inputs(int num[MAX_NUM]) { 

    int scan_check = 1;
    int counter = -1;
    int number = 0;
    
    while ((scan_check == 1) && (counter < MAX_NUM))
   // (scanf("%d", &num[counter]) == 1) && (counter < MAX_NUM)) 
    {
        counter++;
        scan_check = scanf("%d", &num[counter]);
    }
    /* Counter is currently one higher than index
    of array. Subtract one to match counter with index.
    */
    counter--;
    printf("Reversed:\n");
    while (counter >= 0) {
        number = num[counter];
        printf("%d\n", number);
        counter--;
    }
    return 0;
}
