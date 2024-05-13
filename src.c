#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

#define PI 3.14256

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
    printf("\n*******Press 0 to quit the program\n");
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Subtraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulus\n");
    printf("\nEnter the operation you want to do: ");
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
            exit(0);
        default:
            printf("\n********** Invalid Choice **********\n");
    }

    return 0;
}

void addition(int num1, int num2) {
    printf("Addition of two random numbers gives: %d\n", num1 + num2);
}

void subtraction(int num1, int num2) {
    printf("Subtraction of two random numbers: %d\n", num1 - num2);
}

void multiplication(int num1, int num2) {
    printf("Multiplication of two random numbers: %d\n", num1 * num2);
}

void division(int num1, int num2) {
    printf("Division of two random numbers: %f\n", (float)num1 / num2);
}

void modulus(int num1, int num2) {
    printf("Modulus of two random numbers: %d\n", num1 % num2);
}
