#include <stdio.h>

int main() {
	double a;
	a = 123456789012345678;
	printf("%f\n", a);
	
	char str;
	str = 'A';
	printf("%d\n", str);
	printf("%c\n", str);
	str = str + 1;
	printf("%d\n", str);
	printf("%c\n", str);
	
	return 0;
}

/*
float 4byte
double 8byte
둘다 오차가 있다.
double이 더 정밀하다.

char 1byte
아스키 코드 
A~Z 65~90
a~z 97~122 
*/

