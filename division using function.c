#include <stdio.h>

// Function to divide two numbers
float divide(float a, float b) {
    if(b != 0)
        return a / b;  // Returns quotient
    else {
        printf("Error: Division by zero!\n");
        return 0;
    }
}

int main() {
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Function call
    result = divide(num1, num2);

    if(num2 != 0)
        printf("Quotient = %.2f", result);

    return 0;
}
