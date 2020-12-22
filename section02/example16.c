#include <stdio.h>

int main() {
    int a, b, c, sum = 0;
    
    scanf("%d", &a);

    for (int i = 0; i < a; i++) {
        scanf("%d %d", &b, &c);
        sum += c % b;
    }

    printf("%d\n", sum);

    return 0;
}
