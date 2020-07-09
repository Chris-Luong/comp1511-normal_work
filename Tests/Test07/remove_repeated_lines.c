//This program reads characters from its 
//input and writes the characters to its output 
//substituted with a Substitution cipher.
//z5309196 Christopher Luong 05/04/2020

#include <stdio.h>
#define ALPHABET 26

int substitute (int character, int i, char encrypt[ALPHABET]);
int main (void) {
    
    char sub = 0;
    int i = 0;
    char encrypt[ALPHABET] = {0}; 
    while(i < 26) {
        scanf("%c", &sub);
        encrypt[i] = sub;
        i++;
    }
    i = 0;
    int character = getchar();
    if(character == '\n') {
        character = getchar();
    }
    while(character != EOF) {
        int newCharacter = substitute(character, i, encrypt);
        
        putchar(newCharacter);
        
        character = getchar();    
    }
    
    
    return 0;
}
int substitute (int character, int i, char encrypt[ALPHABET]) {
    int check = 0;
    if(character >= 'a' && character <= 'z') {
        while(i < 26) {
            if(i == character - 'a') {
                check = encrypt[i];
            }
            i++;
        }
        return check;
        i = 0; 
    } else if(character >= 'A' && character <= 'Z') {
        while(i < 26) {
            if (i == character - 'A') {
                check = encrypt[i] + 'A' - 'a';
            }
            i++;
        }
        return check;
    }else {
        return character;
    }  
}        


