#include <stdio.h>

int main() {
    int x, y;
    printf("Enter 1st number: ");
    scanf("%d", &x);
    printf("Enter 2nd number: ");
    scanf("%d", &y);

    char operation;

    printf("1. +\n2. -\n3. *\n4. /\n");
    printf("Enter operation from the following: ");
    scanf(" %c", &operation);  

    int c;  

    switch (operation) {
        case '+':
            c = x + y;
            printf("Sum is %d", c);
            break;
        case '-':
            c = x - y;
            printf("Subtraction is %d", c);
            break;
        case '*':
            c = x * y;
            printf("Multiplication is %d", c);
            break;
        case '/':
            if (y != 0) {
                c = x / y;
                printf("Division is %d", c);
            } else {
                printf("Cannot divide by zero");
            }
            break;
        default:
            printf("Invalid input");
            break;
    }

    return 0;
}
