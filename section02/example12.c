#include <stdio.h>

int main() {
    int min, a;

    scanf("%d", &min);

    for (int i = 0; i < 6; i++) {
        scanf("%d", &a);
        if (min > a) {
            min = a;
        }
    }

    printf("%d\n", min);

    return 0;
}
