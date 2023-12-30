/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int year;

    printf("Year = ");
    scanf("%d", &year);

    // If year is divisible 4 and not divisible by 100, or if year is divisble by 400, it is a leap year
    if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
        printf("The year %d is a leap year.", year);
    }

    else {
        printf("The year %d is not a leap year.", year);
    }

    return 0;
}