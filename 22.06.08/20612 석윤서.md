![header](https://capsule-render.vercel.app/api?type=waving&color=FAFA96&text=Ctrl-C&desc=20612%20석윤서&fontColor=000000&height=250&fontSize=70&fontAlignY=35&descAlignY=60&descAlign=80)
# HELLO
> 이름 : 윤서  
> 학번 : 20612  
평소에 컴퓨터에 관심이 많아 프로그램 언어에 대해 배우고 싶다고 생각하였다. 그래서 작년에 html과 css에 대해 배우면서 직접 코딩하는 것의 재미를 느껴 올해에도 프로그램 언어에 대해 배우고 싶어 c 언어를 배우는 "ctrl-c" 동아리에 가입하게 되었다.   
또, 사이버 보안에 관심을 가지고 있어 사이버 보안 계열 진로를 희망하고 있다. 작년에 진로에 관해 깊이 관심을 가지던 중 사이버 보안에 관해 C 언어가 용이하다는 것을 알 수 있었다.  
`C언어에는  시스템 하드웨어와 깊이 통합됐다는 특성이 있어 하드웨어 조작이 용이하고, 보안에 위협을 가할 수 있다. 그러나 C언어에서 생성된 소스 코드를 읽을 수 있다면 악성코드를 깊이 분석하고 코드의 취약점을 고칠 수 있어, 사이버 보안 관리자에게 도움이 된다. 소프트웨어 개발, 모의 해킹 테스트, 애플리케이션 테스트 과정에서 활용하기 좋은 언어이다.`
###### 출처 : 코딩월드뉴스(https://www.codingworldnews.com)
-----
# 1학기 활동내용 정리
[![Readme Card](https://github-readme-stats.vercel.app/api/pin/?username=Lifecream&repo=2022-Ctrl-C-Activities)](https://github.com/Lifecream/2022-Ctrl-C-Activities)
## C 언어
### 입출력
```c
int main()
{
    printf("Hello World!");
    return 0;
}
```
### 사칙연산
> 사칙연산 총활용
```c
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int a,b;
	scanf("%d %d",&a,&b);
	printf("%d\n",a+b);
	printf("%d\n",a-b);
	printf("%d\n",a*b);
   	printf("%d\n",a/b);
	printf("%d",a%b);
	return 0;
}
```
> A+B
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d", a+b);
    return 0;
}
```
> A-B
```c
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a-b);
    return 0;
}
```
> A/B
```c
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	double c,d;
	scanf("%lf %lf", &c,&d);
	printf("%.10lf\n", c/d);
	return 0;
}
```
> 이외에도 나머지에 대해 배웠었다.
### 조건문
> 두 수 비교하기
```c
#include <stdio.h>
int main ()
{
	int A, B;
	scanf("%d %d", &A, &B);
	if(A>B) printf(">");
	else if(A<B) printf("<");
	else if(A=B) printf("==");
	return 0;
 } 
```
> 시험성적 등급 구분하기
```c
#include <stdio.h>
int main()
{
    int A;
    scanf("%d", &A);
    if(A>=90 && A<=100) printf("A\n");
    else if(A>=80 && A<90) printf("B\n");
    else if(A>=70 && A<80) printf("C\n");
    else if(A>=60 && A<70) printf("D\n");
    else if(A>=0 && A<60) printf("F");
    return 0;
}
```
> 그외에도 조건문을 이용하여 윤년을 판별, 시간 설정에 관한 문제를 풀었었다.
> else if 안에 숫자 A 에 관한 조건이 2가지 있기 때문에 &&을 사용해야 한다는 점에 의해 코딩하는데 어려움을 겪었지만 선생님께 질문을 드려 해결하였다.
## 전일제
> 숫자 야구 게임
```c
//NUMBER BASEBALL GAME
#include <stdio.h>
#include <stdlib.h> //랜덤숫자를 사용하기 위한 라이브러리
#include <time.h> //일정치 않은 랜덤숫자를 사용하기 위한 라이브러리,1~50사이의 수를 저장하는 방법
int main() 
{	
	srand(time(NULL));
	int num1, num2, num3;//정수
	do{
		num1=rand()%10;
		num2=rand()%10;
		num3=rand()%10;
	} while(num1==num2 || num3==num2 || num1==num3);
	int in_num1, in_num2, in_num3;
	int s = 0, b = 0, i;
	for(i=0; i<10; i++){
		s=0, b=0;
		printf("YOUR NUMBER: ");
	scanf("%d %d %d", &in_num1, &in_num2, &in_num3);
	if(in_num1>9 || in_num2>9 || in_num3>9){
		printf("한자리 숫자만 입력해주세요.(입력 %d %d %d)", in_num1, in_num2, in_num3);
		i-=1;
		continue; 
	}
	if(in_num1==in_num2 || in_num1==in_num3 || in_num3==in_num2){
		printf("중복없이 3자리 숫자를 입력해주세요. (입력 %d %d %d)", in_num1, in_num2, in_num3);
		i-=1;
		continue;
	}
	if(num1 == in_num1) s++;
	if(num2 == in_num2) s++;
	if(num3 == in_num3) s++;
	if(in_num1 == num2 || in_num1 == num3) b++;
	if(in_num2 == num3 || in_num2 == num1) b++;
	if(in_num3 == num1 || in_num3 == num2) b++;
	if(s==0&& b==0) printf("OUT!\n");
	else printf("S(%d), B(%d)\n", s, b);
	if(s==3){
		printf("WOW! THAT'S RIGHT!");
		break; 
	}
	}
	return 0;
}
```
###### 랜덤 숫자 설정과 반복에 새로 배울수 있게 되었다. 이전의 코딩은 모두 `return 0;` 으로 끝났지만 이 코딩에서는 `continue;`를 이용하여 지속될 수 있게 한다는 것이 흥미로웠다. 또 `||` 이 또는 을 의미한다는 것을 알 수 있게 되었고 조건문에서 활용하였다.
> 숫자 맞추기 게임
```c
//UP&DOWN GAME

#include <stdio.h>
#include <stdlib.h> //랜덤숫자를 사용하기 위한 라이브러
#include <time.h> //일정치 않은 랜덤숫자를 사용하기 위한 라이브러리,1~50사이의 수를 저장하는 방법
int main() 
{	
	srand(time(NULL));
	int random, number;
	int lower=1, upper=50;	
	int i, flag=0;
	random=rand()%50 + 1;//50으로 나누었을때 나머지 0-49 + 1
	for(i=0; i < 10; i++){
		printf("입력 %d번째 %d~%d: ", i+1, lower, upper);
		scanf("%d", &number);
		if(number < lower || number > upper){
			printf("%d ~ %d 의 수를 입력하시오.\n", lower, upper);
			i-=1;
			continue;
		}
		if(random > number) {
			printf("UP\n");
			lower=number+1;
		}
		else if(random < number) {
			printf("DOWN\n");
			upper=number-1;
		}
		else {
			flag=1;
			break; //반복문을 끝냄 
		}
	}
	if(flag)/* if(flag = flag=1) */ printf("THAT'S RIGHT! (입력횟수: %d, 정답: %d)", i+1, random);
	else printf("OH, YOU FAIL! (입력횟수: %d, 정답: %d)", i+1, random);
	return 0;
}
```
-----
## 1학기 활동을 마무리하며
처음 C언어를 배우기 시작할 때에는 입력값과 출력값을 정하는 것만으로도 벅찼지만, 배우는 동안 코딩에 주석을 달며 새롭게 배운 것을 기록하고 그날 배운 코딩을 문서로 작성해 동아리 시간 전에 복습하며 한학기가 끝나갈 때인 지금은 반복문과 조건문 또한 활용할 수 있게 되었다.  
1학기 동안 C 언어에 대해 배우면서 가장 흥미로웠던 활동은 `조건문`에 대해 배우는 것과 `전일제 활동`이였다.  
조건문을 배우면서 if 조건문에서 ture 값이 나오게 되면 더이상 조건문이 진행 되지 않는다는 점과 조건문이 2개 같이 쓰일 때는 &&을 쓰는 점, else if의 활용이 흥미로웠다. 
전일제 활동을 하면서 지금까지 배운 내용을 모두 활용하고 또 새로운 개념을 배울 수 있었다. 랜덤으로 숫자를 설정할 수 있다는 것이 새로웠으며 또, flag를 설정하여 조건문을 더 간단하게 할수 있다는 것과 while을 활용한것이 흥미로웠다.
