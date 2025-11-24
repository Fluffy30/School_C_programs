#include<stdio.h>
int main() {
    float num1, num2, num3, average;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    // Calculate average
    average = (num1 + num2 + num3) / 3;

    // Display the average
    printf("Average = %.2f\n", average);

    return 0;
}