#include <stdio.h>

// Function declaration
int add(int a, int b) {
    return a + b;  // Function returns sum
}

int main() {
    int num1, num2, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    sum = add(num1, num2);

    printf("Sum = %d", sum);

    return 0;
}
