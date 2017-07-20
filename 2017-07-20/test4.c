#include <stdio.h>

int main(void) {
	int num1, num2;
	char op;

	printf("숫자를 입력하세요. : ");
	scanf("%d", &num1);

//	fflush(stdout);
	//getchar(&op);
	while (getchar() != '\n');

	printf("연산자를 입력하세요. : ");
	scanf("%c", &op);

	printf("숫자를 입력하세요. : ");
	scanf("%d", &num2);

	printf("결과값은 %d입니다.", num1 + num2);
	return 0;
}
