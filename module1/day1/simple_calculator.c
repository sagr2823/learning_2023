#include <stdio.h>

int main() {
    float Operand1, Operand2, Result;
    char Operator;

    printf("Enter Operand 1: ");
    scanf("%f", &Operand1);

    printf("Enter Operator (+, -, *, /): ");
    scanf(" %c", &Operator);

    printf("Enter Operand 2: ");
    scanf("%f", &Operand2);

    switch (Operator) {
        case '+':
            Result = Operand1 + Operand2;
            printf("Result: %.2f\n", Result);
            break;
        case '-':
            Result = Operand1 - Operand2;
            printf("Result: %.2f\n", Result);
            break;
        case '*':
            Result = Operand1 * Operand2;
            printf("Result: %.2f\n", Result);
            break;
        case '/':
            if (Operand2 != 0) {
                Result = Operand1 / Operand2;
                printf("Result: %.2f\n", Result);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;
        default:
            printf("Error: Invalid operator!\n");
            break;
}
    
return 0;
}