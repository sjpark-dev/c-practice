#include <stdio.h>

int a[101];

int main() {
    int n, i, m;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d", &m);

    for (i = n - 1; i >= 0; i--) {
        if (a[i] > m) {
            a[i + 1] = a[i];
        } else {
            break;
        }
    }

    a[i + 1] = m;

    for (int i = 0; i < n + 1; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
