#include<stdio.h>

int main() {
	int a, b, c, max, total;
	scanf("%d %d %d", &a, &b, &c);
	total = a + b + c;
	if (a > b) {
		max = a;
	} else {
		max = b;
	}
	
	if (max < c) {
		max = c;
	}
	
	if (total - max > max) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	
	return 0;
}

