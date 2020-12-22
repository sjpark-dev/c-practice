#include <stdio.h>

int main() {
    int total, legs;
    
    scanf("%d %d", &total, &legs);

    for (int i = 1; i < total; i++) {
        if (4 * i + 2 * (total - i) == legs) {
            printf("%d %d\n", i, total - i);
            break;
        }
    }

    return 0;
}
