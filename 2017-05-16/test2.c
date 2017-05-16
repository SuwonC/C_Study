#include <stdio.h>

//문제 : 사칙연산이 가능한 프로그램 작성. 단, 연산은 각각 함수를 두며, add, sub, mul, div라는 이름의 함수로 둔다.
//내 개인적인 추가 사항
//1. 무슨 연산을 할지 질문한다.
//2. 연산의 식을 보여주고 a값과 b의 값을 입력받는다.
//3. 연산의 결과를 출력하고, 메인화면으로 돌아갈지, 프로그램을 종료할 지 묻는다.
//4. 종료라면 return 0;으로 프로그램을 끝내고, 메인화면으로 돌아가면 main();을 호출해 메인으로 돌아간다.
//5. 연산 함수, 연산 시도 함수, 메인화면으로 돌아갈지 묻는 함수를 두어 작동시킨다.
//추가 > return 0;을 하려고 하니 void형식이라서 경고 메시지가 뜬다. exit();을 이용한다.

//사용자 지정 함수를 여기서도 쓰고 밑에서도 쓰는 이유가 어디서나 쓸 수 있게끔 하기 위해서이다.
//자신 함수보다 아래쪽에 작성한 함수를 이용하려고 시도할 시 오류를 내므로 맨 위에서부터 선언해주어 어디에서나 사용가능하게 해준다.
//이 내용이 맞는진 모르겠지만 어디서나 쓸 수 있게는 된다.
int readInt();
double readDouble();
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);
int scanInt();
void doPlus();
void doMinus();
void doTimes();
void doDivided_by();
void doGoMain();

int main(void) {
	system("cls");
	printf("무슨 연산을 할 지 골라주세요.\n1. 덧셈\n2. 뺄셈\n3. 곱셈\n4. 나눗셈\n5. 종료하기\n그 이외 숫자. 새로고침\n숫자를 입력해주세요 : ");
	int num;
	scanf("%d", &num);
	switch (num) {
		case 1:
			doPlus();
			break;
		case 2:
			doMinus();
			break;
		case 3:
			doTimes();
			break;
		case 4:
			doDivided_by();
			break;
		case 5:
			return 0;
		default:
			main();
			break;
	}
}

int readInt() {
	int num;
	scanf("%d", &num);
	return num;
}

double readDouble() {
	double num;
	scanf("%lf", &num);
	return num;
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}

int scanInt() {
	int num;
	scanf("%d", &num);
	return num;
}

void doGoMain() {
	printf("\n\n\n무슨 행동을 할 지 골라주세요.\n1. 종료하기\n그 이외 숫자. 메인화면으로 돌아가기\n숫자를 입력해주세요 : ");
	int num;
	scanf("%d", &num);
	switch (num) {
	case 1:
		return 0;
	default:
		main();
		break;
	}
}

void doPlus() {
	system("cls");
	int num1, num2;
	printf("다음과 같은 연산을 진행합니다!\na + b = 값\n");
	printf("a의 값은? : ");
	num1 = scanInt();
	printf("b의 값은? : ");
	num2 = scanInt();
	int result = add(num1, num2);
	printf("%d + %d = %d 입니다.", num1, num2, result);
	doGoMain();
}
void doMinus() {
	system("cls");
	int num1, num2;
	printf("다음과 같은 연산을 진행합니다!\na - b = 값\n");
	printf("a의 값은? : ");
	num1 = scanInt();
	printf("b의 값은? : ");
	num2 = scanInt();
	int result = sub(num1, num2);
	printf("%d - %d = %d 입니다.", num1, num2, result);
	doGoMain();
}

void doTimes() {
	system("cls");
	int num1, num2;
	printf("다음과 같은 연산을 진행합니다!\na * b = 값\n");
	printf("a의 값은? : ");
	num1 = scanInt();
	printf("b의 값은? : ");
	num2 = scanInt();
	int result = mul(num1, num2);
	printf("%d * %d = %d 입니다.", num1, num2, result);
	doGoMain();
}

void doDivided_by() {
	system("cls");
	int num1, num2;
	printf("다음과 같은 연산을 진행합니다!\na / b = 값\n");
	printf("a의 값은? : ");
	num1 = scanInt();
	printf("b의 값은? : ");
	num2 = scanInt();
	int result = div(num1, num2);
	printf("%d / %d = %d 입니다.", num1, num2, result);
	doGoMain();
}
