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
& 주소연산자 
double은 scanf일때 %lf를 꼭써야한다.
printf일때는 %lf %f둘다 사용가능하다. 
*/

