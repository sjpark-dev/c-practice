#include <stdio.h>

double divide(int x, int y) {
    double t;
    t = (double) x / y;
    return t;
}

int main() {
    int a = 30, b = 20;
    printf("%lf\n", divide(a, b));

    return 0;
}
