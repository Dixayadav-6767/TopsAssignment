#include <stdio.h>

int main() {
    char ch;
    printf("Enter any alphabet: ");
    scanf("%c", &ch);

    // Ternary operator to check vowel or consonant
    (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
     ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        ? printf("It is a vowel.\n")
        : ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            ? printf("It is a consonant.\n")
            : printf("Invalid input. Not an alphabet.\n");

    return 0;
}

