/*
백준 2884번
https://www.acmicpc.net/problem/2884
*/

#include <stdio.h>

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b-45 < 0){
		a--;
		if(a==-1)
			a=23;
		b+=15;
	}
	else
		b-=45;
	printf("%d %d",a,b);
}
