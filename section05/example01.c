#include <stdio.h>

int a[11][11];

int main() {
    int n, i, j, k = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = n - 1; j >= 0; j--) {
            a[j][i] = k;
            k++;
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%3d", a[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
