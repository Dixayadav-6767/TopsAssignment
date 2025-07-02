#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    (num >= 0) 
        ? printf("Positive Number\n") 
        : printf("Negative Number\n");

    return 0;
}
