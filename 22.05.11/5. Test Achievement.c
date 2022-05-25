/*
백준 9498번
https://www.acmicpc.net/problem/9498
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf("%d", &a);
	if(a>=90)
		printf("A");
	else if(a>=80)
		printf("B");
	else if(a>=70)
		printf("C");
	else if(a>=60)
		printf("D");
	else
		printf("F");
}
