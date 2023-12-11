#include 

int main() {
    /* Given values */
    int a = 5;
    int b = 7;
    int c = 9;

    /* Perform arithmetic operations */
    int sum = a + b + c;
    int difference = a - b;
    int product = b * c;
    float quotient = (float)a / b; /* Ensure a floating-point result for division */

    /* Display the results */
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return (0);
}
