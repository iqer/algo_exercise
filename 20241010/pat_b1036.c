#include <stdio.h>

int main() {
  int width;
  char alpha;
  scanf("%d %c", &width, &alpha);
  int height = width / 2;

  for (int i = 0; i < height; i++) {
    if (i == 0 || i == height - 1) {
      for (int j = 0; j < width; j++) {
        printf("%c", alpha);
      }
      printf("\n");
    } else {
      printf("%c", alpha);
      for (int m = 0; m < width - 2; m++) {
        printf(" ");
      }
      printf("%c\n", alpha);
    }
  }
}