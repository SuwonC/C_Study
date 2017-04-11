#include <stdio.h>

int getMinInt(int* n, int size);
int getMaxInt(int* n, int size);
int minInt(int p1, int p2);
int maxInt(int p1, int p2);

int main(void) {
  int arr[5];
  int i;
  for (i = 1;i<=5;i++) {printf("%d번째 값을 입력해주세요 : ",i);scanf("%d",&arr[i-1]);}
  printf("입력한 5개의 값중 최댓값은 %d, 최솟값은 %d입니다.", getMinInt(arr, 5), getMaxInt(arr,5));
	return 0;
}

int maxInt(int p1, int p2) {
	return (p1 > p2) ? p1 : p2;
}

int minInt(int p1, int p2) {
	return (p1 < p2) ? p1 : p2;
}

int getMaxInt(int* n, int size) {
  int max = n[0];
  int i;
  for (i = 1; i < size; i++)
    if (n[i] > max) max = n[i];
  return max;
}


int getMinInt(int* n, int size) {
  int min = n[0];
  int i;
  for (i = 1; i < size; i++)
    if (n[i] < min) min = n[i];
  return min;
}
