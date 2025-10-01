#include <stdio.h>

void q1() {
    int a = 5;
    int b = 10;
    printf("A: %d\n", a);
    printf("B: %d\n", b);
}

void q2() {
    int a = 2, b = 4, c = 6;
    printf("A: %d\nB: %d\nC: %d\n", a, b, c);
}

void q3() {
    int studentAge = 18;
    int student_age = 20;
    int StudentAge = 22;
    printf("studentAge= %d\nstudent_age= %d\nStudentAge= %d\n", studentAge, student_age, StudentAge);
}

void q4() {
    int a;
    double b;
    char c;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
}

void q5() {
    int a = 5, b = 10;
    printf("Before Swap: A= %d, B= %d\n", a, b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After Swap: A= %d, B= %d\n", a, b);
}

void q6() {
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
}

void q7() {
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
}

void q8() {
    float length, width, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    if (length <= 0 || width <= 0) {
        printf("Error: Length and width must be positive!\n");
        return;
    }
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
}

void q9() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
}

void q10() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    int sum = a + b + c;
    float average = sum / 3.0;
    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);
}

void q11() {
    float initialBalance, deposit, withdrawal, finalBalance;
    printf("Enter initial balance: ");
    scanf("%f", &initialBalance);
    printf("Enter deposit amount: ");
    scanf("%f", &deposit);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);
    if (withdrawal > initialBalance + deposit) {
        printf("Error: Withdrawal exceeds available balance!\n");
        return;
    }
    finalBalance = initialBalance + deposit - withdrawal;
    printf("Final Balance: %.2f\n", finalBalance);
}

int main() {
    int choice;
    while (1) {
        printf("\n--- C Programming Questions Menu ---\n");
        printf("1. Q1 - Declare two variables and print values\n");
        printf("2. Q2 - Declare three integers in one line\n");
        printf("3. Q3 - Different naming conventions\n");
        printf("4. Q4 - Print sizes of data types\n");
        printf("5. Q5 - Swap two variables without third\n");
        printf("6. Q6 - Sum, difference, product, quotient\n");
        printf("7. Q7 - Input name, age, CGPA\n");
        printf("8. Q8 - Rectangle area and perimeter\n");
        printf("9. Q9 - Celsius to Fahrenheit\n");
        printf("10. Q10 - Sum and average of three integers\n");
        printf("11. Q11 - Simple bank balance system\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: q1(); break;
            case 2: q2(); break;
            case 3: q3(); break;
            case 4: q4(); break;
            case 5: q5(); break;
            case 6: q6(); break;
            case 7: q7(); break;
            case 8: q8(); break;
            case 9: q9(); break;
            case 10: q10(); break;
            case 11: q11(); break;
            case 0: printf("Exiting...\n"); return 0;
            default: printf("Invalid choice. Try again.\n");
        }
    }
}
