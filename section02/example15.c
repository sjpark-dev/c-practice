#include <stdio.h>

int main() {
    int a, b, cnt = 0;
    
    scanf("%d", &a);

    for (int i = 0; i < 7; i++) {
        scanf("%d", &b);

        if (b % 10 == a) {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
