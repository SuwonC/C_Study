#include <stdio.h>

int main(void) {
	int i, j;
	printf("숫자를 입력해주세요. : ");
	scanf("%d", &i);
	for (j = 1; j <= i; j ++) {
		printf("%d x %d = %d\n", i,j,i*j);
	}
	return 0;
}
