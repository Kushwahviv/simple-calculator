
#include <stdio.h>

int main() {
    float a, b;
    char op, choice;

    do {
        printf("\nEnter first number: ");
        scanf("%f", &a);

        printf("Enter operator (+, -, *, /): ");
        scanf(" %c", &op);

        printf("Enter second number: ");
        scanf("%f", &b);

        switch (op) {
            case '+':
                printf("Result = %.2f\n", a + b);
                break;

            case '-':
                printf("Result = %.2f\n", a - b);
                break;

            case '*':
                printf("Result = %.2f\n", a * b);
                break;

            case '/':
                if (b != 0)
                    printf("Result = %.2f\n", a / b);
                else
                    printf("Cannot divide by zero!\n");
                break;

            default:
                printf("Invalid operator!\n");
        }

        printf("\nDo you want to calculate again? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    printf("Calculator closed.\n");

    return 0;
}
