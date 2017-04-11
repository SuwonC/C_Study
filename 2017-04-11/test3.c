#include <stdio.h>

int main(void) {
	int i1, i2;
	printf("Argument1 ? : ");
	scanf("%d", &i1);
	printf("Argument2 ? : ");
	scanf("%d", &i2);
	int flag = 1;
	int i = 0;
	int result = 0;
	while(flag > 0) {
		i++;
		if (i%i1 == 0 && i%i2 == 0) {
			flag = 0;
			result = i;
			break;
		}
	}
	printf("두 수의 최소공배수는 %d 입니다.",i);
  return 0;
}
