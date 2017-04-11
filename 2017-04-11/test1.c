#include <stdio.h>

int maxInt(int p1, int p2) {
	return (p1 > p2) ? p1 : p2;
}

int minInt(int p1, int p2) {
	return (p1 < p2) ? p1 : p2;
}

int main(void) {
	int i1,i2,i3;
	printf("Argument1 ? : ");
	scanf("%d", &i1);
	int num;
	while(i1 > 0) {
		printf("%d",i1%10);
		i1 = i1/10;
	}
	printf("\n 출력 완료!");
	system("pause");
	printf("Argument1 ? : ");
	scanf("%d", &i2);
	printf("Argument2 ? : ");
	scanf("%d", &i3);
	int flag = 1;
	int i = 0;
	int j = 0;
	while(i <= minInt(i2,i3)) {
		i ++;
		if (i2%i == 0 && i3%i == 0) {j = i;}
	}
	printf("두 수의 최대공약수는 %d입니다.",j);
	return 0;
}
