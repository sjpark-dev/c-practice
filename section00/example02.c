#include<stdio.h>

int main() {
	int a, b = 11, c = 23;
	a = -2147483649;
	printf("%d\n", a);
	
	return 0;
}

/** 
a 변수는 32bit의 저장 공간을 갖는다.
32bit = 4byte 
1 byte = 8bit
1 bit = 0 or 1
최상위 비트는 부호 비트 0이면 양수 1이면 음수
2의 31제곱 - 1 까지 표현 가능
양수는 2,147,483,647
음수는 -2,147,483,648
2,147,483,648을 저장하면 오버플로우 일어나서 
최솟값으로 회전한다.
빈대로 -2,147,483,649를 저장하면 최댓값으로 회전한다. 
**/

