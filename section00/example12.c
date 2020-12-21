#include<stdio.h>
#include<math.h>

int main() {
	int a = 15, b = 6, min;
	printf("%d\n", a>>1);
	min = a < b ? a : b;
	printf("%d\n", min);
		
	return 0;
}

/*
비트 연산자
 &는 두개다 1일때 1
 |는 적어도 하나가 1일때 1  
 ^(xor, 배타적 논리합)은 다르면 1 같으면 0
 << 비트를 왼쪽으로 이동, 남은 공간은 0으로 채워진다. 
 곱하기 2 의 n 제곱을 해준것과 같다.
 >> 비트를 오른쪽으로 이동
 나누기 2의 n제곱을 해준건과 같다.
 소숫점은 날린다.
 
 삼항연산자 
*/

