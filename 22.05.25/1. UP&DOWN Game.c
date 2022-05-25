/*
22.05.25 전일제
게임 1: 업다운 게임
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	printf("----------------------------------------\n");
	printf("----------------------------------------\n");
	printf("컴퓨터가 1부터 50 사이의 무작위 수를 골랐습니다.\n");
	printf("10번 이내에 컴퓨터가 고른 수를 맞춰 주세요.\n");
	printf("----------------------------------------\n");
	printf("----------------------------------------\n");
	int random;
	random = (rand() % 50) + 1;
	for(int i = 1; i<=10; i++){
		int n;
		printf("입력: ");
		scanf("%d",&n);
		if(n < 1 || n > 50){
			printf("1부터 50 사이의 숫자를 입력해주세요.\n");
			i--;
			continue; 
		}
		if(n < random){
			printf("Case %d: UP\n", i);
		}
		else if(n > random){
			printf("Case %d: DOWN\n", i);
		}
		else{
			printf("----------\n맞췄습니다.\n고른 숫자: %d / 실행 횟수: %d\n----------",random,i);
			break;
		}
		if(i == 10){
			printf("----------\n모든 기회를 소진했습니다.\n고른 숫자: %d\n----------",random);
			break;
		}
		printf("\n");
	}
}
