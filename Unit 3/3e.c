/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int num, temp, digit, rev = 0;

    printf("Number = ");
    scanf("%d", &num);

    // Assign num value to temp 
    temp = num;

    // Compute the reverse of the input
    while(temp != 0) {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    printf("The input is %d and the reverse of it is %d.", num, rev);

    // Check if they are equal or not
    if(num == rev) {
        printf(" The numbers are equal.");
    }

    else {
        printf(" The numbers are not equal.");
    }

    return 0;
}