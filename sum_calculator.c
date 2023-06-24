#include <stdio.h>

int main() {
    int firstNumber, secondNumber;

    printf("Enter the first number: ");
    scanf("%d", &firstNumber);

    printf("Enter the second number: ");
    scanf("%d", &secondNumber);

    int sum = firstNumber + secondNumber;

    printf("The sum of the first and second number is %d\n", sum);

    return 0;
}
