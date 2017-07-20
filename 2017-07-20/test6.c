#include <stdio.h>
#include <string.h>

int main(void) {
	printf("%d", stcmp("ABCD", "ABCC"));
	printf("%d", stcmp("ABCD", "ABCDE"));
	return 0;
}
