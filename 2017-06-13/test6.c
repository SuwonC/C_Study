#include <stdio.h>

int main(void) {
	int num[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* pnum = num;

	printf("%d\n", num);//처음값
	printf("%d\n", ++pnum);//pnum포인터 주소값의 +4값. (int형 변수이기 때문)
	printf("%d\n", num);
	printf("%d\n", ++*pnum);//pnum포인터 주소에 해당하는 정수의 값에 +1값
	printf("%d\n", pnum);

	/*
	주의!
	printf("%d", num++);
	이 값은 num의 값을 출력하고 연산을 합니다.
	printf("%d", ++num);
	이 값은 num의 값을 연산하고 출력합니다.
	*/

	return 0;
}
