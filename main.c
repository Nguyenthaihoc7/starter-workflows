#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    printf("Hello, OSS CI! Version 2\n");
    printf("2 + 3 = %d\n", add(2, 3));

    return 0;
}
