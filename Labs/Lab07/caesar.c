//This program reads characters from its input 
//and writes the characters to its output 
//encrypted with a Caesar cipher.
//z5309196 Christopher Luong 31/03/2020

#include <stdio.h>

int encrypt (int character, int shift);
int main (void) {
    
    int shift = 0;
    scanf("%d", &shift);
    int character = getchar();
    while(character != EOF) {
        int newCharacter = encrypt(character, shift);
        putchar(newCharacter);
        
        character = getchar();    
    }
    
    
    return 0;
}
int encrypt (int character, int shift) {
    if (character >= 'a' && character <= 'z') {
        int alphabetPosition = character - 'a' + shift;
        alphabetPosition %= 26;
        if(alphabetPosition < 0) {
            alphabetPosition +=26;
        }
        return 'a' + alphabetPosition;
    } else if(character >= 'A' && character <= 'Z') {
        int alphabetPosition = character - 'A' + shift;
        alphabetPosition %= 26;
        if(alphabetPosition < 0) {
            alphabetPosition += 26;
        }
        return 'A' + alphabetPosition;
    } else {
        return character;
    }
}
        





