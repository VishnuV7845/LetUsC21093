#include <stdio.h>

int main() {
    int marks[5], i;
    int sum = 0;
    float avg;

    printf("Enter marks: ");

    for(i=0; i<5; i++) {
        scanf("%d", &marks[i]);

        if(marks[i] > 100) {
            printf("Mark should not exceed 100.");
            return 0;
        }

        sum += marks[i];
    }

    avg = (float)sum / 5;
    printf("Average Marks = %.2f", avg);

    return 0;
}