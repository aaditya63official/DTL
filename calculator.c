#include <stdio.h>

void printBinary(int num) {
    int bits[32];
    int i = 0;
    while (num > 0) {
        bits[i] = num % 2;
        num = num / 2;
        i++;
    }

    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", bits[j]);
    }
    printf("\n");
}

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
            printf("Sum is %d\n", c);
            printBinary(c);
            break;
        case '-':
            c = x - y;
            printf("Subtraction is %d\n", c);
            printBinary(c);
            break;
        case '*':
            c = x * y;
            printf("Multiplication is %d\n", c);
            printBinary(c);
            break;
        case '/':
            if (y != 0) {
                c = x / y;
                printf("Division is %d\n", c);
                printBinary(c);
            } else {
                printf("Cannot divide by zero\n");
            }
            break;
        default:
            printf("Invalid input\n");
            break;
    }

    return 0;
}
