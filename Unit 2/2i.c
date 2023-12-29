#include <stdio.h>

int main() {
    int sum, d1, d2, d5, d10, d50, d100, notes;

    printf("Sum of money = ");
    scanf("%d", &sum);

    d100 = sum/100;
    sum = sum%100;

    d50 = sum/50;
    sum = sum%50;

    d10 = sum/10;
    sum = sum%10;

    d5 = sum/5;
    sum = sum%5;

    d2 = sum/2;
    sum = sum%2;

    d1 = sum;

    notes = d100 + d50 + d10 + d5 + d2 + d1;

    printf("Rs. 100 Notes = %d\n", d100);
    printf("Rs. 50 Notes = %d\n", d50);
    printf("Rs. 10 Notes = %d\n", d10);
    printf("Rs. 5 Notes = %d\n", d5);
    printf("Rs. 2 Notes = %d\n", d2);
    printf("Rs. 1 Notes = %d\n", d1);
    printf("Total Notes = %d\n", notes);

    return 0;
}