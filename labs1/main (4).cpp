#include <stdio.h> 
int main() { 
    char str[100] = "1st year computer science"; 
    int length = 0; 
    // Calculate length 
    while (str[length] != '\0') { 
        length++; 
    } 
    printf("Length of the string: %d\n", length);