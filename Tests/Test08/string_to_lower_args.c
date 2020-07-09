//This program reads command line arguments   _______________________doesnt work
//then prints them out. When it prints out, 
//it will convert all upper case letters to lower case.
//z5309196 Christopher Luong 15/04/2020

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_LENGTH 256

int main (int argc, char *argv[]) {
    int i = 1;
    char string[MAX_LENGTH];
    
    
    while (i < argc) {
        int len = strlen(argv[i]);
        strcpy(string[len + 1],argv[i]);
        int counter = 0;
        int checker = 0;        
        
        while (counter < len) {
            if (string[counter] >= 'A' && string[counter] <= 'Z') {
                string[counter] = string[counter] - 'A' + 'a';
                checker = 1;                
            }
            counter++;
        } 
        if (checker == 1) {
            counter = 0;
            while (counter < len) {
                putchar(string[counter]);
            }
        } else {
            fputs(argv[i], stdout);
            printf(" ");
        }

        i++;  
    } 
    printf("\n");
    return 0;
}       

 /*int &temp = *argv[i];
        if (temp >= 'A' && temp <= 'Z') {
            int newChar = temp - 'A' + 'a';
            putchar(newChar);
        } else {
            fputs(argv[i], stdout);
            printf(" ");
        }*/
