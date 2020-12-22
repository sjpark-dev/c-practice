#include <stdio.h>

int main() {
    int a, b, min;

    scanf("%d %d", &a, &b);

    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}
