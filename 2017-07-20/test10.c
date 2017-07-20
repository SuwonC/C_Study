#include <stdio.h>

typedef struct personInfo {
	char name[20];
	int age;
	int gender;
} PersonInfo;

void getMainIn(PersonInfo * pinfo);

int main(void) {
	PersonInfo info = { "", 0, 0 };
	PersonInfo * pinfo = &info;
	getMainIn(pinfo);
	system("cls");//window
	//system("clear");//linux
	printf("당신의 이름은 %s입니다.\n", info.name);
	printf("당신의 나이는 %d입니다.\n", info.age);
	printf("당신의 성별은 %s입니다.\n", info.gender == 0 ? "여" : "남");
	return 0;
}

void getMainIn(PersonInfo * pinfo) {
	char tempc[20];
	printf("이름을 입력하세요 : ");
	gets(pinfo->name);
	printf("나이를 입력하세요 : ");
	scanf("%d", &pinfo->age);
	printf("성별을 입력하세요 (남/여) : ");
	scanf("%s", &tempc);
	pinfo->gender = (strcmp(tempc, "여") == 0 || strcmp(tempc, "W") == 0 || strcmp(tempc, "G") == 0 || strcmp(tempc, "女") == 0) ? 0 : 1;
}
