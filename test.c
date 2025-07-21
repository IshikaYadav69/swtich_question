#include <stdio.h>

int main(void) {
    char op;
    double num1, num2, result;

    printf("Enter an operator (+, -, *, /): ");
    if (scanf(" %c", &op) != 1) return 1;

    printf("Enter two numbers: ");
    if (scanf("%lf %lf", &num1, &num2) != 2) return 1;
    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%.2lf %c %.2lf = %.2lf\n", num1, op, num2, result);
            break;

