#include <stdio.h>

int a[10];

int main() {
    int i, j, sum = 0, tmp;

    for (i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    for (i = 0; i < 8; i++) {
        for (j = i + 1; j < 9; j++) {
            tmp = sum - a[i] - a[j];

            if (tmp == 100) {
                a[i] = -1;
                a[j] = -1;
                break;
            }
        }

        if (tmp == 100) {
                break;
            }
    }

    for (i = 0; i < 9; i++) {
        if (a[i] > 0) {
            printf("%d ", a[i]);
        }
    }

    return 0;
}
