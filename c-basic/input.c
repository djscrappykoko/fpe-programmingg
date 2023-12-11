#include 

int main() {
    /* Input values for a, b, and c */
    int a, b, c;
    
    printf("Enter value for a: ");
    scanf("%d", &a);
    
    printf("Enter value for b: ");
    scanf("%d", &b);
    
    printf("Enter value for c: ");
    scanf("%d", &c);

    /* Perform arithmetic operations */
    int sum = a + b + c;
    int difference = a - b;
    
    /* Display the results */
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);

   return (0);
}
