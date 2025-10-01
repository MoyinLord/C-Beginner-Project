#include <stdio.h>
int main() {
    int numberone, numbertwo;
    printf("Enter first number: ");
    scanf("%d", &numberone);
    printf("Enter second number: ");
    scanf("%d", &numbertwo);
    printf("Sum: %d\n", numberone + numbertwo);
    printf("Difference: %d\n", numberone - numbertwo);
    printf("Product: %d\n", numberone * numbertwo);
    if (numbertwo != 0)
        printf("Quotient: %d\n", numberone / numbertwo);
    else
        printf("Error: Division by zero!\n");
    return 0;
}