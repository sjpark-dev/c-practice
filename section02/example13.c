#include <stdio.h>

int main() {
    int a, sum = 0, min = 101;

    for (int i = 0; i < 7; i++) {
        scanf("%d", &a);
        
        if (a % 2 == 1) {
            sum += a;

            if (min > a) {
            min = a;
            }
        }
    }

    printf("%d\n%d\n", sum, min);

    return 0;
}
