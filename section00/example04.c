#include <stdio.h>

int main() {
	int a, b;
	printf("input two numbers : ");
	scanf("%d %d", &a, &b);
	printf("Your Number : %d %d\n", a, b); 
	
	double c;
	printf("input number : ");
	scanf("%lf", &c);
	printf("Your Number : %0.2f\n", c);
	
	return 0;
}

/*
& �ּҿ����� 
double�� scanf�϶� %lf�� ������Ѵ�.
printf�϶��� %lf %f�Ѵ� ��밡���ϴ�. 
*/

