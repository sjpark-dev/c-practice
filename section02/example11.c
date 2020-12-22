#include <stdio.h>

int main() {
    int a, b, m = 1;

    scanf("%d %d", &a, &b);

    for (int i = 0; i < b; i++) {
        m *= a;
    }

    printf("%d\n", m);

    return 0;
}
