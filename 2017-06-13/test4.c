#include <stdio.h>

int main(void) {
	int arr[3] = { 15,25,35 };
	int* ptr = &arr[0];// int* ptr = arr; 와 동일한 문장입니다.

	printf("Ptr  : %d, Arr : %d \n", ptr[0], arr[0]);//같은 동작입니다.
	printf("Ptr  : %d, Arr : %d \n", ptr[1], arr[1]);//같은 동작입니다.
	printf("Ptr  : %d, Arr : %d \n", ptr[2], arr[2]);//같은 동작입니다.

	return 0;
}
