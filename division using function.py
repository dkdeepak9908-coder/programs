# Function to divide two numbers
def divide(a, b):
    if b != 0:
        return a / b
    else:
        print("Error: Division by zero!")
        return None

# Input from user
num1 = float(input("Enter first number: "))
num2 = float(input("Enter second number: "))

# Function call
result = divide(num1, num2)

if result is not None:
    print("Quotient =", result)
