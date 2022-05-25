/*
백준 1330번
https://www.acmicpc.net/problem/1330
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	scanf("%d %d", &a, &b);
	if(a>b)
		printf(">");
	else if(a<b)
		printf("<");
	else
		printf("==");
}
