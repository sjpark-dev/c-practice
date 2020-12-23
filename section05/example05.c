#include <stdio.h>
#include <math.h>

int a[2][7];

int main() {
    int n, k, i, j, s, y, cnt = 0, sum = 0;
    scanf("%d %d", &n, &k);

    for (i = 1; i <= n; i++) {
        scanf("%d %d", &s, &y);
        a[s][y]++;
    }

    for (i = 0; i <= 1; i++) {
        for (j = 1; j <= 2; j++) {
            sum += a[i][j]; 
        }
    }

    cnt += ceil((double) sum / k);

    for (i = 0; i <= 1; i++) {
        for (j = 3; j <= 5; j += 2) {
            sum = 0;
            sum += a[i][j];
            sum += a[i][j+1]; 
            cnt += ceil((double) sum / k);
        }
    }

    printf("%d\n", cnt);

    return 0;
}
