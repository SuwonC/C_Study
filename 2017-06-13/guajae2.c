#include <stdio.h>

char mainC[10000];

int main(void) {
	char chr2[100];
	printf("\n단어 입력 : ");
	gets(chr2);

	int start = strlen(mainC);
	for (int i = start; i <= strlen(mainC) + start; i++) {
		mainC[i] = chr2[i - start];
	}

	printf("\n현재까지의 문자열 : %s", mainC);

	main();
	return 0;
}
