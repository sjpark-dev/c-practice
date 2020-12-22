#include<stdio.h>

int main() {
	int i;
	for(i = 1; i <= 10; i++) {
		if (3 <= i && i < 6) {
			printf("%d\n", i);
		}
	}
	
	return 0;
}
