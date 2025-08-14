#include <stdio.h>

int globalVar = 10;  // Global Scope

void test() {
    int localVar = 5;  // Local Scope
    printf("Local = %d\n", localVar);
    printf("Global = %d\n", globalVar);
}

int main() {
    test();
    // printf("%d", localVar);  ? Error: localVar is not accessible here
    return 0;
}

