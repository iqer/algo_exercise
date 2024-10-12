#include <stdio.h>

int main() {
  int num1, num2, base;
  scanf("%d %d %d", &num1, &num2, &base);
  int sum = num1 + num2;
  int data[30] = {};
  int i = 0;
  while (sum != 0) {
    data[i++] = sum % base;
    sum = sum / base;
  }
  i--;
  for (; i >= 0; i--) {
    printf("%d", data[i]);
  }
}