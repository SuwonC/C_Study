#include <stdio.h>
#include <string.h>

int main(void) {
	printf("%d", strcmp("ABCD", "ABCC"));
	printf("%d", strcmp("ABCD", "ABCDE"));
	return 0;
}
