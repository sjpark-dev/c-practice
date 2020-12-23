#include <stdio.h>

int a[10];

int main() {
    for (int i = 0; i < 9; i++) {
        scanf("%d", &a[i]);
    }

    int n, tmp;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        tmp = a[0];
        
        for (int j = 0; j < 8; j++) {
            a[j] = a[j+1];
        }

        a[8] = tmp;
    }

    for (int i = 0; i < 9; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
