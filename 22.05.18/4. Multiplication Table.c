/*
백준 2739번
https://www.acmicpc.net/problem/2739
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a;
	scanf("%d",&a);
	for(int i = 1; i<=9; i++){
		printf("%d * %d = %d\n",a,i,a*i);
	}
}
