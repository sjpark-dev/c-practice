#include<stdio.h>

int main() {
	int n, i, cnt = 0;
	
	scanf("%d", &n);
	
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			cnt++;
		}
	}
	
	if (cnt == 2) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}
