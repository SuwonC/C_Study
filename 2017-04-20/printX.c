#include <stdio.h>

int j = 9;

int main(void) {
	system("cls");
	printf("원하는 수를 입력해주세요. (홀수만 입력해주세요!) : ");
	scanf("%d", &j);
	if (j%2 == 0) {
		main();
	} else {
		int i,k,l,m;
		for (i = 0; i <= j; i ++) {
			k = j-i;
			l = i+1;
			for (m = 1; m <= j; m ++) {
				if (k == m || l == m) printf("#");
				else printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
