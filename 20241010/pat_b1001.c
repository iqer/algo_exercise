// 偶数则砍半
// 奇数则3n+1 砍半

#include <stdio.h>

int main() {
  int num = 0;
  scanf("%d", &num);
  int counter = 0;
  while (num != 1) {
    if (num % 2 == 0) {
      num = num / 2;
    } else {
      num = (num * 3 + 1) / 2;
    }
    counter++;
  }

  printf("次数: %d", counter);
}