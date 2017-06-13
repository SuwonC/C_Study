#include <stdio.h>

void change(int*);

int main(void) {
	//변수 선언
	int i = 10;
	printf("Now i = %d\n", i);

	//포인터를 이용하여 값을 바꿔보겠습니다. 인자는 주소의 값입니다.
	change(&i);

	//변경된 값을 보여줍니다.
	printf("Now i = %d\n", i);
	return 0;
}

void change(int* num) {
	//num주소에 해당하는 변수에 20이라는 값으로 설정합니다.
	*num = 20;
}
