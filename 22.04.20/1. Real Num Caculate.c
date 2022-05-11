/*
백준 1008번
https://www.acmicpc.net/problem/1008
*/

//실수 자료형인 double과 %lf를 활용한 실수 입출력 및 소수점 한정시키기

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	double a,b;
	scanf("%lf %lf",&a, &b);
	printf("%.9lf", a/b);
	return 0;
}
