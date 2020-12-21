#include<stdio.h>

int main() {
	int a, b, c;
	double avg;
	scanf("%d %d %d", &a, &b, &c);
	avg = (a + b + c) / 3.0;
	avg = avg * 100;
	avg = avg + 0.5;
	avg = (int) avg;
	avg = avg / 100;
	printf("%f\n", avg);
	
	return 0;	
}

