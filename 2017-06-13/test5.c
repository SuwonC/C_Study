#include <stdio.h>

int main(void) {
	int* ptr1 = 0x0010;//이 방법은 적절치 않은 초기화입니다. 하면 안되요!
	double* ptr2 = 0x0010;//이 방법은 적절치 않은 초기화입니다. 하면 안되요!

	printf("Ptr1 (+1, +2) : %p %p \n", ptr1 + 1, ptr1 + 2);
	printf("Ptr2 (+1, +2) : %p %p \n", ptr2 + 1, ptr2 + 2);
	printf("Ptr1 : %p Ptr2 : %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("Ptr1 (++) : %p Ptr2 (++) : %p \n", ptr1, ptr2);
	return 0;
}
