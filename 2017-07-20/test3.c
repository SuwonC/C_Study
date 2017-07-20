#include <stdio.h>

int main(void) {
	int ch;
	while (1) {
		ch = getche();
		if (ch == EOF) break;
		putchar(ch);
	}
	return 0;
}
