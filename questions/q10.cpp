#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float average = sum / 3.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
    return 0;
}