#include <stdio.h>

struct point {//point라는 이름의 구조체 정의
	int xpos;//point 구조체를 구성하는 멤버 xpos
	int ypos;//point 구조체를 구성하는 멤버 ypos
};

//int가 자료형의 이름인 것 처럼 point도 자료형의 이름이다!
//단, 프로그래머가 정의 한 자료형이기 때문에 사용자 정의 자료형 (user defined data type)이라 한다.

struct person {
	char name[20];//이름 저장
	char phoneNum[20];//전화번호 저장
	int age;//나이 저장
};//배열도 구조체의 멤버로 선언이 가능함!

struct point pos;
struct person man;//구조체 변수선언의 예

//멤버 접근은?
int main(void) {
	man.age = 1;
	printf("%d", man.age);
	return 0;
}
