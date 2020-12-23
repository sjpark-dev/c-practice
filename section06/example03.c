#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {
    if (n == 1) {
        return false;
    }

    int i;

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n, i, a;
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &a);
        if (isPrime(a)) {
            printf("%d ", a);
        }
    }

    return 0;
}
