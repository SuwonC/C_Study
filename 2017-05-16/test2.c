#include <stdio.h>

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