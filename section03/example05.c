#include <stdio.h>

int main() {
    int n;
    
    scanf("%d", &n);

    for (int i = 1; i <= n / 2 + 1; i++) {
        for (int k = i; k < n / 2 + 1; k++) {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) {
            printf("@");
        }

        printf("\n");
    }

    for (int i = 1; i <= n / 2; i++) {
        for (int k = 1; k <= i; k++) {
            printf(" ");
        }

        for (int j = i; j <= n / 2; j++) {
            printf("@");
        }

        printf("\n");
    }

    return 0;
}
