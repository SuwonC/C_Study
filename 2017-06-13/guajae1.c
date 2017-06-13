#include <stdio.h>


int main(void) {
	//문제 1. 피보나치 수열
	int i = 0;
	printf("원하는 수열의 개수를 적어주세요. (1 ~ 46) : ");
	scanf("%d", &i);
	i = i < 1 ? 1 : (i > 46 ? 46 : i);
	int fibo[46 + 1];
	for (int j = 0; j <= i; j++) {
		if (j < 2) {
			fibo[j] = (j < 1) ? 0 : 1;
		} else {
			fibo[j] = fibo[j - 1] + fibo[j - 2];
		}
		printf("%d번째 피보나치 수열값 : %d\n", j, fibo[j]);
	}
	return 0;
}
