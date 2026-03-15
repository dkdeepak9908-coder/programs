#include <stdio.h>

// Function to subtract two numbers
int subtract(int a, int b) {
    return a - b;  // Returns the difference
}

int main() {
    int num1, num2, diff;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Function call
    diff = subtract(num1, num2);

    printf("Difference = %d", diff);

    return 0;
}
