#include <stdio.h>
int main() {
    char name[50];
    int age;
    float cgpa;
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    printf("Name: %s\nAge: %d\nCGPA: %.2f\n", name, age, cgpa);
    return 0;
}