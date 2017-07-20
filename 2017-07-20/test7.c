#include <stdio.h>

struct point {//point라는 이름의 구조체 정의
	int xpos;//point 구조체를 구성하는 멤버 xpos
	int ypos;//point 구조체를 구성하는 멤버 ypos
};

struct person {
	char name[20];//이름 저장
	char phoneNum[20];//전화번호 저장
	int age;//나이 저장
};//배열도 구조체의 멤버로 선언이 가능함!
