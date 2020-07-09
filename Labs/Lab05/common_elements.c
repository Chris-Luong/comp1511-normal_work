// copy all of the values in source1 which are also found in source2 into destination
// return the number of elements copied into destination
// z5309196 Christopher Luong 21/03/2020

#include <stdio.h>

int common_elements(int length, int source1[length], int source2[length], int destination[length]);

int main (void) {
    int source1[] = {1, 4, 1, 5, 9, 2};
    int source2[] = {1, 1, 8, 2, 5, 3};
    int destination[] = {0, 0, 0, 0, 0, 0}; //{0};
    common_elements(6, source1, source2, destination);

    return 0;
}

int common_elements(int length, int source1[length], 
 int source2[length], int destination[length]) {
    int index2 = 0;
    int common = 0;
    int index1 = 0;
    // loops through first array
    while (index1 < length) {
        // loops through second array
        while (index2 < length) {
            // checks for common element
            if (source1[index1] == source2[index2]) {
                // store common element in 3rd array
                destination[common] = source1[index1];
                // each time a common element is detected
                // "common" goes up as it stands for the
                // number of common elements
                common++;
                // removes duplicates
                index2 = length - 1;
            }
            index2++;
        }
        index1++;
        // goes back to the start of second array
        // to check for common elements with next values
        // in the first array
        index2 = 0;  
    }
    return common;
}

// You may optionally add a main function to test your common_elements function.
// It will not be marked.
// Only your common_elements function will be marked.
