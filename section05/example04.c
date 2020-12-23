#include <stdio.h>
#include <math.h>

int a[2][7];

int main() {
    int n, k, i, j, x, y, cnt = 0;
    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);
        a[x][y]++;
    }

    for (i = 0; i <= 1; i++) {
        for (j = 1; j <= 6; j++) {
            cnt += ceil((double) a[x][y] / k); 
        }
    }

    printf("%d\n", cnt);

    return 0;
}
