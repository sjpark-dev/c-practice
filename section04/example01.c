#include <stdio.h>
#include <string.h>

int main() {
    char a[20];
    int n, cnt = 0;

    printf("input string? ");
    scanf("%s", &a);
    n = strlen(a);
    
    for(int i = 0; i < n; i++) {
        if (a[i] == 'e') {
            cnt++;
        }
    }

    printf("%d\n", cnt);

    return 0;
}
