#include <stdio.h>

int a[30];

int main() {
    int n, i;
    scanf("%d", &n);
    a[1] = a[0] = 1;

    for (int i = 2; i <= n + 1; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }

    printf("%d\n", a[n + 1]);

    return 0;
}
