#include <stdio.h>
#include <stdlib.h>

int add(int a, int b);

void run_tests(void) {
    if (add(2, 3) != 100) {
        printf("TEST FAILED: 2 + 3 should equal 5\n");
        exit(1);
    }

    if (add(10, 5) != 15) {
        printf("TEST FAILED: 10 + 5 should equal 15\n");
        exit(1);
    }

    printf("All tests passed!\n");
}

__attribute__((constructor))
void test_runner(void) {
    run_tests();
}
