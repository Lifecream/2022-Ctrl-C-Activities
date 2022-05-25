/*
백준 2438번
https://www.acmicpc.net/problem/2438
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf("%d",&a);
	for(int i = 1; i<=a; i++){
		for(int j = 1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
}
