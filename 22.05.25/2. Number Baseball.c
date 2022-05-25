/*
22.05.25 전일제
게임 2: 업다운 게임
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	printf("----------------------------------------\n");
	printf("----------------------------------------\n");
	printf("컴퓨터가 서로 다른 세자리 수를 골랐습니다.\n");
	printf("10번 이내에 컴퓨터가 고른 수를 맞춰 주세요.\n");
	printf("----------------------------------------\n");
	printf("----------------------------------------\n");
	int first = rand()%10;
	int second = rand()%10;
	int third = rand()%10;
	while(first == second || second == third || third == first){
		first = rand()%10;
		second = rand()%10;
		third = rand()%10;
	}
	int random = first * 100 + second * 10 + third;
	//printf("%d\n",random);
	for(int i = 1; i<=10; i++){
		int n;
		printf("%d번째 입력: ", i);
		scanf("%d",&n);
		int n_first = n / 100;
		int n_second = (n / 10) % 10;
		int n_third = n % 10;
		int S = 0, B = 0;
		if(n < 100 || n >= 1000 || n_first == n_second || n_second == n_third || n_third == n_first){
			printf("조건에 맞는 숫자를 입력해주세요.\n\n");
			i--;
			continue; 
		}
		if(random == n) printf("맞췄습니다.\n");
		if(n_first == first) S++;
		else if(n_first == second || n_first == third) B++;
		if(n_second == second) S++;
		else if(n_second == first || n_second == third) B++;
		if(n_third == third) S++;
		else if(n_third == first || n_third == second) B++;
		printf("Case %d: %dS %dB\n\n",i,S,B); 
	}
}
