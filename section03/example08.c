#include <stdio.h>

int main() {
    int c, n, cnt = 0;

    scanf("%d", &c);

    for (int i = 2; i < 10; i++) {
        for (int j = 1; j < i; j++) {
            n = i * 10 + j;

            if (n > c) {
                printf("%d", cnt);
                break;
            }

            printf("%d\n", n);
            cnt++;
        }

        if (n > c) {
                break;
            }
    }

    return 0;
}
