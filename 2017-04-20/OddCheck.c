#include <stdio.h>

int main(void) {
  int i;
  printf("숫자를 입력해주세요. : ");
  scanf("%d", &i);
  printf("%d값은 \"%s\" 입니다.", i, (i%2 == 0) ? "짝수" : "홀수");
  return 0;
}
