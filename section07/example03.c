#include <stdio.h>

struct Student {
    int num, math, eng, clang;
};

int main() {
    struct Student s[51];
    int n, i, max, clang;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d %d %d %d", &s[i].num, &s[i].math, &s[i].eng, &s[i].clang);
    }

    max = s[1].math;
    clang = s[1].clang;

    for (i = 2; i <= n; i++) {
        if (max < s[i].math) {
            max = s[i].math;
            clang = s[i].clang;
        }
    }
    
    printf("%d\n", clang);

    return 0;
}
