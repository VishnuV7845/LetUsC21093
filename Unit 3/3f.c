/*
Name: Vishnu Vignesh
Roll No.: CH.EN.U4CYS21093
*/

#include <stdio.h>

int main() {
    int ram, shyam, ajay;

    printf("Ages of Ram, Shyam, and Ajay: ");
    scanf("%d %d %d", &ram, &shyam, &ajay);

    // Conditional statements to determine the youngest
    if(ram < shyam && ram < ajay) {
        printf("Ram is the youngest of the three brothers.");
    }

    else if(shyam < ram && shyam < ajay) {
        printf("Shyam is the youngest of the three brothers.");
    }

    else if(ajay < ram && ajay < shyam) {
        printf("Ajay is the youngest of the three brothers.");
    }

    else if (ram == shyam && ram == ajay) {
        printf("They are all the same age.");
    }

    return 0;
}