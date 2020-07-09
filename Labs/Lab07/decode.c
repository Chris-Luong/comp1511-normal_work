//This program decrypts text encrypted 
//in substitution.c

#include <stdio.h>
#define ALPHABET 26

int substitute (int encrypted, int i, char encrypt[ALPHABET]);
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
    int encrypted = getchar();
    if(encrypted == '\n') {
        encrypted = getchar();
    }
    while(encrypted != EOF) {
        int decryption = substitute(encrypted, i, encrypt);
        
        putchar(decryption);
        
        encrypted = getchar();    
    }
    
    
    return 0;
}
int substitute (int encrypted, int i, char encrypt[ALPHABET]) {
    int check = 0;
    if(encrypted >= 'a' && encrypted <= 'z') {
        while(i < 26) {
            if(encrypt[i] == encrypted) {
                check = 'a' + i;
            }
            i++;
        }
        return check;
        i = 0; 
    } else if(encrypted >= 'A' && encrypted <= 'Z') {
        while(i < 26) {
            if (encrypt[i] == encrypted + 'a' - 'A' ) {
                check = 'A' + i;
            }
            i++;
        }
        return check;
    }else {
        return encrypted;
    }  
}        
