//This program reads characters from its
//input and writes the same characters to 
//its output, except it does not write lower 
//case vowels ('a', 'e','i', 'o', 'u').
//z5309196 Christopher Luong 31/03/2020


#include <stdio.h>

int is_vowel(int character);
int main (void) {
    int ch = getchar();
    while(ch != EOF) {
        if(is_vowel(ch) == 0) {
            putchar(ch);   
        }
        ch = getchar();
    }
    return 0;
}
int is_vowel(int character) {
    if(character == 'a' || character == 'e' || 
       character == 'i' || character == 'o' || 
       character == 'u') {
        return 1;
    } else {
        return 0;
    }
}    
