#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool judge(char str[]) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - 1 - i]) {
      return false;
    }
  }
  return true;
}
int main() {
  char str[256];
  while (gets(str)) {
    bool flag = judge(str);
    if (flag == true) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
}