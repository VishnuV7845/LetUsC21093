/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int num;

    printf("Number = ");
    scanf("%d", &num);

    // Mod 2 returns 0 if number is even
    if(num % 2 == 0) {
        printf("The number %d is even.", num);
    }


    // Mod 2 does not return 0 if number is odd
    else {
        printf("The number %d is odd.", num);
    }

    return 0;
}