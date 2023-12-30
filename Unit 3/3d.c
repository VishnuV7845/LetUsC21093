/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int year, day;
    const char *days[] = {"Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};

    printf("Enter a year: ");
    scanf("%d", &year);

    // Zeller's Congruence algorithm
    day = (1 + 5 * ((year - 1) % 4) + 4 * ((year - 1) % 100) + 6 * ((year - 1) % 400)) % 7;

    printf("On January 1st, %d, the day was: %s\n", year, days[day]);

    return 0;
}
