#include <stdio.h>

void printStar(int n) {
    int i;

    for (i = 1; i <= n; i++) {
        printf("*");
    }

    printf("\n");
}

int main() {
    int n, i;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        printStar(i);
    }

    return 0;
}
