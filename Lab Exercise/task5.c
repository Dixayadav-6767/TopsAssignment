#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic
    printf("Sum: %d\n", a + b);

    // Relational
    printf("Is a > b? %d\n", a > b);

    // Logical
    printf("Logical AND: %d\n", (a > 0 && b > 0));

    return 0;
}

