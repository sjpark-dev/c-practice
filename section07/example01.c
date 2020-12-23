#include <stdio.h>

int main() {
    int a = 10, b = 20;
    printf("%d\n", a);
    printf("%x\n", &a);
    printf("%d\n\n", *(&a));

    int *pa;
    pa = &a;
    printf("%x\n", &a);
    printf("%x\n", pa);
    printf("%d\n\n", *pa);

    printf("%d\n", *pa);
    *pa = b;
    printf("%d\n", *pa);
    *pa = *pa + 1;
    printf("%d\n", *pa);
    printf("%d\n", a);

    return 0;
}
