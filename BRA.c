#include<stdio.h>
void main() {
    int n, first = 0, second = 2, next, c;
    printf("Enter the number of terms you want in even numbers: ");
    scanf("%d", &n);
    printf("even numbers:\n");
    printf("%d\n%d\n", first, second); 
    for (c = 2; c <= n; c++) {
            next = first + second;
            printf("%d\n", next);
            first = second;
            second = next;
        }
    }
