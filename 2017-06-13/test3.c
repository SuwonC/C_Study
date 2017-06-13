#include <stdio.h>

int main(void) {
	int arr[3] = { 0,1,2 };
	printf("배열의 이름 : %p \n", arr);
	printf("첫 번째 요소 : %p \n", &arr[0]);
	printf("두 번째 요소 : %p \n", &arr[1]);
	printf("세 번째 요소 : %p \n", &arr[2]);
	//arr = &arr[1]; //이 문장은 컴파일 에러를 일으킨다. 그 이유는 test2.c에 적어놓았다.

	/*
	실행 결과 ===
	배열의 이름 : 00AFF790
	첫 번째 요소 : 00AFF790
	두 번째 요소 : 00AFF794
	세 번째 요소 : 00AFF798
	계속하려면 아무 키나 누르십시오 . . .
	*/

	return 0;
}
