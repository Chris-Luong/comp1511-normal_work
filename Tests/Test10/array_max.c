// This program finds the maximum value 
//in an array.
//z5309196 Christopher Luong 29/04/2020

#include <stdio.h>
#include <assert.h>

#define MAX_SIZE 1000

int array_max(int size, int array[size]);

// DO NOT CHANGE THIS MAIN FUNCTION
int main(int argc, char *argv[]) {
    int array[MAX_SIZE];

    // Get the array size.
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);
    assert(size > 0);

    // Scan in values for the array.
    printf("Enter array values: ");
    int i = 0;
    while (i < size) {
        assert(scanf("%d", &array[i]) == 1);
        i = i + 1;
    }

    printf("Maximum value is %d.\n", array_max(size, array));

    return 0;
}

// Return the largest value in a given array.
int array_max(int size, int array[size]) {
    int i = 0;
    int curr = 0;
    int result = array[i];

    //loop through array    
    while (i < size) {
        curr = array[i];
        //if the current integer is higher than
        //current highest, current highest is replaced
        if (curr > result) {
            result = curr;
        }              
        i++;
    }   
    return result;
}
