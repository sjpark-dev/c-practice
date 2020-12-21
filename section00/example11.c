#include<stdio.h>
#include<math.h>

int main() {
	int a;
	double b;
	scanf("%d", &a);
	b = a / 12.0;
	b = ceil(b);
	printf("%d\n", (int) b);
	
	return 0;	
}

/*
math.h 
ceil() 올림 
floor() 내림 
round() 반올림 
*/

