#include <stdio.h>

int min(int tmp[], int size) {
    int min = tmp[0], i;

    for (i = 1; i < size; i++) {
        if (tmp[i] < min) {
            min = tmp[i];
        }
    }

    return min;
}

int main() {
    int n, a[101], i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("%d\n", min(a, n));

    return 0;
}
