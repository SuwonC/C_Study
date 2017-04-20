#include <stdio.h>

int main(void) {
	int i,k,l,m;
	for (i = 1; i <= 9; i ++) {
		k = 5-i;
		l = i-5;
		for (m = -4; m <= 4; m ++) {
			if (k == m || l == m) printf("#");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
