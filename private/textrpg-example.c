#include <stdio.h>
#include <windows.h>

char name[50];
int lv = 1;
int exp = 0;
int gold = 1000;
int atk = 10;
int def = 10;
int hp = 100;
int maxhp = 100;
int burning = 1;//경험치버닝, 1당 100%, 0일경우 흭득불가, 0이하일경우 오히려 떨어짐.

void startGame(void) {
	system("cls");
	printf("Hello %s!\n", name);
	printf("Town : Metatron Village\n");
	printf("What would you like to do?\n");
	printf("1. Check my Info\n");
	printf("2. Go to Field\n");
	printf("3. Go to Training Center\n");
	printf("4. Regen HP\n");
	printf("7. Exit\n");
	printf("Your Answer : ");
	int doi2 = 0;
	scanf("%d", &doi2);
	if (doi2 == 1) {
		system("cls");
		printf("Nickname : %s\nLv. %d   Exp. %d/%d\nHP : %d/%d\nATK : %d\nDEF : %d\nGold : %d\n\n", name, lv, exp, getMaxExp(lv), hp, maxhp, atk, def, gold);
		printf("Your Answer : ");
		char doi1[50];
		scanf("%s", doi1);
		startGame();
	} else if (doi2 == 2) {
		system("cls");
		printf("Your Lv : %d\n", lv);
		printf("=-=-=-=-= Field List =-=-=-=-=\n");
		printf("1. Swamp (Req Lv. 1)\n");
		printf("2. Forest (Req Lv. 30)\n");
		printf("3. Tower (Req Lv. 50)\n");
		printf("Your Answer : ");
		int doo = 0;
		scanf("%d", &doo);
		system("cls");
		if (doo == 1) {
			if (lv < 1) {
				printf("This Field REQ Lv : %d\nYour Lv : %d\nReturn Town...",1,lv);
				Sleep(1000);
				startGame();
			} else {
				int flag = 0;
				int mobhp = 200;
				int mobmhp = 200;
				int mobatk = 11;
				int mobdef = 1;
				int mobexp = 300 * burning;
				int mobgold = 20 * burning;
				char mobname[20] = "Crocodile";
				while(flag == 0) {
					Sleep(500);
					int dmg1 = atk - mobdef;
					if (dmg1 < 0) {dmg1 = 0;}
					mobhp = mobhp - dmg1;
					printf("Player Attack to %s / Damage : %d\n", mobname, dmg1);
					printf("Now MobHP : %d/%d\n", mobhp, mobmhp);
					if (mobhp < 1) {
						flag = 1;
						printf("Win!!!\nREWAND [Exp : %d, Gold : %d]\n", mobexp, mobgold);
						gold = gold + mobgold;
						exp = exp + mobexp;
						int flags = 0;
						while(flags == 0) {
							if (exp >= getMaxExp(lv)) {
								exp = exp - getMaxExp(lv);
								lv = lv + 1;
								atk = atk + 2;
								def = def + 2;
								hp = hp + 10;
								maxhp = maxhp + 10;
								printf("Level Up! %d\n", lv);
							} else {
								flags = 1;
							}
						}
						printf("Return Town....");
						Sleep(3000);
						startGame();
					} else {
						Sleep(500);
						int dmg2 = mobatk - def;
						if (dmg2 < 0) {dmg2 = 0;}
						hp = hp - dmg2;
						printf("%s Attack to Player / Damage : %d\n", mobname, dmg2);
						printf("Now PlayerHP : %d/%d\n", hp, maxhp);
						if (hp < 1) {
							flag = 1;
							printf("Lose... Return Town....");
							hp = 5;
							Sleep(3000);
							startGame();
						}
					}
				}
			}
		} else if (doo == 2) {
			if (lv < 30) {
				printf("This Field REQ Lv : %d\nYour Lv : %d\nReturn Town...",30,lv);
				Sleep(1000);
				startGame();
			} else {
				int flag = 0;
				int mobhp = 700;
				int mobmhp = 700;
				int mobatk = 100;
				int mobdef = 40;
				int mobexp = 3250 * burning;
				int mobgold = 40 * burning;
				char mobname[20] = "Crocodile";
				while(flag == 0) {
					Sleep(500);
					int dmg1 = atk - mobdef;
					if (dmg1 < 0) {dmg1 = 0;}
					mobhp = mobhp - dmg1;
					printf("Player Attack to %s / Damage : %d\n", mobname, dmg1);
					printf("Now MobHP : %d/%d\n", mobhp, mobmhp);
					if (mobhp < 1) {
						flag = 1;
						printf("Win!!!\nREWAND [Exp : %d, Gold : %d]\n", mobexp, mobgold);
						gold = gold + mobgold;
						exp = exp + mobexp;
						int flags = 0;
						while(flags == 0) {
							if (exp >= getMaxExp(lv)) {
								exp = exp - getMaxExp(lv);
								lv = lv + 1;
								atk = atk + 2;
								def = def + 2;
								hp = hp + 10;
								maxhp = maxhp + 10;
								printf("Level Up! %d\n", lv);
							} else {
								flags = 1;
							}
						}
						printf("Return Town....");
						Sleep(3000);
						startGame();
					} else {
						Sleep(500);
						int dmg2 = mobatk - def;
						if (dmg2 < 0) {dmg2 = 0;}
						hp = hp - dmg2;
						printf("%s Attack to Player / Damage : %d\n", mobname, dmg2);
						printf("Now PlayerHP : %d/%d\n", hp, maxhp);
						if (hp < 1) {
							flag = 1;
							printf("Lose... Return Town....");
							hp = 5;
							Sleep(3000);
							startGame();
						}
					}
				}
			}
		} else if (doo == 3) {
			if (lv < 50) {
				printf("This Field REQ Lv : %d\nYour Lv : %d\nReturn Town...",50,lv);
				Sleep(1000);
				startGame();
			} else {
				int flag = 0;
				int mobhp = 3000;
				int mobmhp = 3000;
				int mobatk = 700;
				int mobdef = 600;
				int mobexp = 8750 * burning;
				int mobgold = 80 * burning;
				char mobname[20] = "Crocodile";
				while(flag == 0) {
					Sleep(500);
					int dmg1 = atk - mobdef;
					if (dmg1 < 0) {dmg1 = 0;}
					mobhp = mobhp - dmg1;
					printf("Player Attack to %s / Damage : %d\n", mobname, dmg1);
					printf("Now MobHP : %d/%d\n", mobhp, mobmhp);
					if (mobhp < 1) {
						flag = 1;
						printf("Win!!!\nREWAND [Exp : %d, Gold : %d]\n", mobexp, mobgold);
						gold = gold + mobgold;
						exp = exp + mobexp;
						int flags = 0;
						while(flags == 0) {
							if (exp >= getMaxExp(lv)) {
								exp = exp - getMaxExp(lv);
								lv = lv + 1;
								atk = atk + 2;
								def = def + 2;
								hp = hp + 10;
								maxhp = maxhp + 10;
								printf("Level Up! %d\n", lv);
							} else {
								flags = 1;
							}
						}
						printf("Return Town....");
						Sleep(3000);
						startGame();
					} else {
						Sleep(500);
						int dmg2 = mobatk - def;
						if (dmg2 < 0) {dmg2 = 0;}
						hp = hp - dmg2;
						printf("%s Attack to Player / Damage : %d\n", mobname, dmg2);
						printf("Now PlayerHP : %d/%d\n", hp, maxhp);
						if (hp < 1) {
							flag = 1;
							printf("Lose... Return Town....");
							hp = 5;
							Sleep(3000);
							startGame();
						}
					}
				}
			}
		} else if (doo == 4) {
			hp = maxhp;
		} else {
			startGame();
		}
	} else if (doi2 == 3) {
		system("cls");
		printf("=-=-=-=-= Training Center =-=-=-=-=\n");
		printf("1. ATK + 1 (Cost : 1000)\n");
		printf("2. ATK + 10 (Cost : 9000)\n");
		printf("3. ATK + 100 (Cost : 80000)\n");
		printf("4. DEF + 1 (Cost : 1000)\n");
		printf("5. DEF + 10 (Cost : 9000)\n");
		printf("6. DEF + 100 (Cost : 80000)\n");
		printf("7. MaxHP + 2 (Cost : 1000)\n");
		printf("8. MaxHP + 20 (Cost : 9000)\n");
		printf("9. MaxHP + 200 (Cost : 80000)\n");
		printf("Other. Return Town\n");
		printf("Your Answer : ");
		int dooo = 0;
		scanf("%d", &dooo);
		system("cls");
		if (dooo == 1) {
			if (gold < 1000) {
				printf("Cost : 1000\nYour Gold : %d\nReturn Town...\n",gold);
				Sleep(1000);
				startGame();
			} else {
				gold = gold - 1000;
				atk = atk + 1;
				printf("SUCCESS Training!\nREWAND : GOLD - 1000, ATK + 1");
				Sleep(1000);
				startGame();
			}
		} else if (dooo == 2) {
			if (gold < 9000) {
				printf("Cost : 9000\nYour Gold : %d\nReturn Town...\n",gold);
				Sleep(1000);
				startGame();
			} else {
				gold = gold - 9000;
				atk = atk + 10;
				printf("SUCCESS Training!\nREWAND : GOLD - 9000, ATK + 10");
				Sleep(1000);
				startGame();
			}
		} else if (dooo == 3) {
			if (gold < 80000) {
				printf("Cost : 1000\nYour Gold : %d\nReturn Town...\n",gold);
				Sleep(1000);
				startGame();
			} else {
				gold = gold - 80000;
				atk = atk + 100;
				printf("SUCCESS Training!\nREWAND : GOLD - 80000, ATK + 10");
				Sleep(1000);
				startGame();
			}
		} else {
			printf("Return Town...");
			Sleep(1000);
			startGame();
		}
	} else if (doi2 == 7) {
		exit(1);
	} else { 
		startGame();
	}
}

int getMaxExp(int l) {
	return l * l * 150;
}

int main(void) {
	printf("Hello World!\nWhat's your name? : ");
	scanf("%s", name);
	printf("Your name is %s. Right?\n1 : Yes\n2. No\nOther : Restart\nYour Answer : ", name);
	int i = 0;
	scanf("%d", &i);
	if (i == 1) {
		startGame();
	} else if (i == 2) {
		printf("Restart...\n");
		system("cls");
		main();
	} else {system("cls");main();}
	/////////////////////////////////////////////////
	//%s : 문자열 표시 하는데 쓰입니다. 그렇다구요 뭐.....//
	//%d : 부호가 있는 10진수 형태로 정수를 출력하는거에요!//
	////
	/////////////////////////////////////////////////
	return 0;
}
