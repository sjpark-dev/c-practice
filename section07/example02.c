#include <stdio.h>

void swap1(int pa, int pb) {
    int tmp;
    tmp = pa;
    pa = pb;
    pb = tmp;
}

void swap2(int *pa, int *pb) {
    int tmp;
    tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main() {
    int a = 10, b = 20;

    swap1(a, b); // Call-by-value
    printf("%d %d\n\n", a, b);

    swap2(&a, &b); // Call-by-reference
    printf("%d %d\n", a, b);

    return 0;
}
