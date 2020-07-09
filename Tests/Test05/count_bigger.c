//z5309196 Christopher Luong
//25/03/2020


#include <stdio.h>

// return the number of "bigger" values in an array (i.e. larger than 99
// or smaller than -99).
int count_bigger(int length, int array[]) {
    int counter = 0;
    int bigNum = 0;
    while(counter < length) {
        if(array[counter] > 99 || array[counter] < -99) {
            bigNum++;
        }
        counter++;
    }
    
    return bigNum;
}

// This is a simple main function which could be used
// to test your count_bigger function.
// It will not be marked.
// Only your count_bigger function will be marked.

#define TEST_ARRAY_SIZE 8

int main(void) {
    int test_array[TEST_ARRAY_SIZE] = {141, 5, 92, 6, 535, -89, -752, -3};

    int result = count_bigger(TEST_ARRAY_SIZE, test_array);

    printf("%d\n", result);
    return 0;
}
