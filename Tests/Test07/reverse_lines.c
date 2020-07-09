//This program reads characters from its input 
//and writes the same characters to its output 
//with lower case letters converted to upper case 
//and upper case letters converted to lower case.
//z5309196 Christopher Luong 31/03/2020

#include <stdio.h>

int swap_case(int character);
int main (void) {
    int character = getchar();
    
    while(character != EOF) {
        int new_character = swap_case(character);
        putchar(new_character);
        
        character = getchar();
    }
    return 0;
}
// return upper case letter corresponding to lower case letter
// e.g. given 'f' return 'F'
// other characters returned unchanged

int swap_case(int character) {
    if (character >= 'a' && character <= 'z') {
        int alphabetPosition = character - 'a';
        return 'A' + alphabetPosition;
    } else if(character >= 'A' && character <= 'Z') {
        int alphabetPosition = character - 'A';
        return 'a' + alphabetPosition;
    } else {
        return character;
    }
}
