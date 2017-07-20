#include <stdio.h>

typedef struct personInfo {
	char name[20];
	int age;
	int gender;
} PersonInfo;

int main(void) {
	PersonInfo info = { "", 0, 0 };
	int tempi;
	char tempc[20];
	printf("이름을 입력하세요 : ");
	gets(info.name);
	printf("나이를 입력하세요 : ");
	scanf("%d", &tempi);
	info.age = tempi;
	printf("성별을 입력하세요 (남/여) : ");
	scanf("%s", &tempc);
	info.gender = strcmp(tempc, "여") == 0 ? 0 : 1;

	printf("당신의 이름은 %s입니다.\n", info.name);
	printf("당신의 나이는 %d입니다.\n", info.age);
	printf("당신의 성별은 %s입니다.\n", info.gender == 0 ? "여" : "남");
	return 0;
}
