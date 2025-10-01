//Q1. Write a program that declares two variables, assigns values to them, and print their values.
#include <stdio.h>
int main() {
    int a = 5;
    int b = 10;
    printf("A: %d\n", a);
    printf("B: %d\n", b);

    return 0;
}

//Q2. Declare three integers in one line, assign values, and print them using one printf statement.
#include <stdio.h>
int main() {
   int a = 2, b = 4, c = 6;
    printf("A: %d\nB: %d\nC: %d\n", a, b, c);
    return 0;
}

//Q3. Create a program that declares variables using different naming conventions.
#include <stdio.h>
int main() {
    int studentAge = 18;
    int student_age = 20;
    int StudentAge =22;
    printf("studentAge= %d\nstudent_age= %d\nStudentAge= %d\n", studentAge, student_age, StudentAge);
    return 0;
}

//Q4. Create a program that prints the size of data types using sizeof().
#include <stdio.h>
int main() {
    int a;
    double b;
    char c;
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of double: %zu bytes\n", sizeof(b));
    printf("Size of char: %zu bytes\n", sizeof(c));
    return 0;
}

//Q5. Swap two variables without using a third variable.
#include <stdio.h>
int main() {
    int a = 5, b = 10;
    printf("Before Swap: A= %d, B= %d\n", a, b);
    a = a + b; // a now becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10
    printf("After Swap: A= %d, B= %d\n", a, b);
    return 0;
}

//Q6. Ask user to enter two integers and print their sum, difference, product, and quotient.
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
    printf("Quotient: %d\n", numberone / numbertwo);
    return 0;
}

//Q7. Ask user for name, age, and CGPA, then print formatted output.
#include <stdio.h>
int main() {
    char name[50];
    int age;
    float cgpa;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);
    printf("Name: %s\nAge: %d\nCGPA: %.2f\n", name, age, cgpa);
    return 0;
}

//Q8. Take rectangle length and width, compute area and perimeter.
#include <stdio.h>
int main() {
    float length, width, area, perimeter;
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    area = length * width;
    perimeter = 2 * (length + width);
    printf("Area: %.2f\n", area);
    printf("Perimeter: %.2f\n", perimeter);
    return 0;
}

//Q9. Convert Celsius to Fahrenheit.
#include <stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("Temperature in Fahrenheit: %.2f\n", fahrenheit);
    return 0;
}

//Q10. Enter three integers in one line, print sum and average.
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

//Q11. Create a program that simulates a simple bank balance system. The user enters an initial balance, a deposit amount, and a withdrawal amount. The program updates and prints the final balance.
#include <stdio.h>
int main() {
    float initialBalance, deposit, withdrawal, finalBalance;
    printf("Enter initial balance: ");
    scanf("%f", &initialBalance);
    printf("Enter deposit amount: ");
    scanf("%f", &deposit);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);
    finalBalance = initialBalance + deposit - withdrawal;
    printf("Final Balance: %.2f\n", finalBalance);
    return 0;
}


// Done.