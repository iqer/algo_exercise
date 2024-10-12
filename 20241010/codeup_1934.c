#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);

  int data[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &data[i]);
  }
  int find_num;
  scanf("%d", &find_num);

  for (int i = 0; i < n; i++) {
    if (find_num == data[i]) {
      printf("%d\n", i);
      break;
    }
  }
}