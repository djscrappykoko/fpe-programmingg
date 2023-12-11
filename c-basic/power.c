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

    /* Calculate powers */
    int square_a = a * a;
    int cube_b = b * b * b;
    int fourth_power_c = c * c * c * c;

    /* Display the results */
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);
    printf("Square of a: %d\n", square_a);
    printf("Cube of b: %d\n", cube_b);
    printf("Fourth power of c: %d\n", fourth_power_c);

    return (0);
}
