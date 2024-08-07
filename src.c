#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define PI 3.14159  // Corrected value of PI if you decide to use it

void addition(int num1, int num2);
void subtraction(int num1, int num2);
void multiplication(int num1, int num2);
void division(int num1, int num2);
void modulus(int num1, int num2);

int main(void) {
    int num1, num2;
    srand(time(NULL));
    num1 = rand() % 100000;
    printf("num1 = %d\n", num1);
    num2 = rand() % 100000;
    printf("num2 = %d\n", num2);

    int choice;
    while (1) {
        printf("\n******* Press 0 to quit the program *******\n");
        printf("Enter 1 for Addition\n");
        printf("Enter 2 for Subtraction\n");
        printf("Enter 3 for Multiplication\n");
        printf("Enter 4 for Division\n");
        printf("Enter 5 for Modulus\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addition(num1, num2);
                break;
            case 2:
                subtraction(num1, num2);
                break;
            case 3:
                multiplication(num1, num2);
                break;
            case 4:
                division(num1, num2);
                break;
            case 5:
                modulus(num1, num2);
                break;
            case 0:
                printf("Exiting program.\n");
                exit(0);
            default:
                printf("\n********** Invalid Choice **********\n");
        }
    }

    return 0;
}

void addition(int num1, int num2) {
    printf("Addition of two numbers: %d\n", num1 + num2);
}

void subtraction(int num1, int num2) {
    printf("Subtraction of two numbers: %d\n", num1 - num2);
}

void multiplication(int num1, int num2) {
    printf("Multiplication of two numbers: %d\n", num1 * num2);
}

void division(int num1, int num2) {
    if (num2 != 0) {
        printf("Division of two numbers: %f\n", (float)num1 / num2);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulus(int num1, int num2) {
    if (num2 != 0) {
        printf("Modulus of two numbers: %d\n", num1 % num2);
    } else {
        printf("Error: Modulus by zero is not allowed.\n");
    }
}
