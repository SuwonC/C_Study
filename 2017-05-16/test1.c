#include <stdio.h>

//사용자 지정 함수를 여기서도 쓰고 밑에서도 쓰는 이유가 어디서나 쓸 수 있게끔 하기 위해서이다.
//자신 함수보다 아래쪽에 작성한 함수를 이용하려고 시도할 시 오류를 내므로 맨 위에서부터 선언해주어 어디에서나 사용가능하게 해준다.
//이 내용이 맞는진 모르겠지만 어디서나 쓸 수 있게는 된다.

int Add(int num1, int num2);
void ShowAddResult(int num);
int ReadNum(void);
void HowToUseThisProg(void);

int main(void) {
	int result, num1, num2;
	HowToUseThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add(num1, num2);
	ShowAddResult(result);
	return 0;
}

int Add(int num1, int num2) {
	return num1 + num2;
}
void ShowAddResult(int num) {
	printf("덧셈결과 출력 : %d\n", num);
}
int ReadNum(void) {
	int num;
	printf("숫자를 입력해주세요 : ");
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg(void) {
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}
