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
�Ѵ� ������ �ִ�.
double�� �� �����ϴ�.

char 1byte
�ƽ�Ű �ڵ� 
A~Z 65~90
a~z 97~122 
*/

