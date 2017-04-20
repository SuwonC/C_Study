#include <stdio.h>

int main(void) {
	int i, j, k;
	printf("숫자를 입력해주세요. : ");
	scanf("%d", &i);
	printf("\n");
	for (j = 1; j <= i; j ++) {
		if (j%2 == i%2) {
			printf("=-=-=-=-= %d단 =-=-=-=-=\n", j);
			for (k = 1; k <= i; k ++) printf("%d x %d = %d\n", j, k, j*k);
			printf("\n");
		}
	}
	return 0;
}
