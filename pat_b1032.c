#include <stdio.h>

int main() {
  int count = 0;
  scanf("%d", &count);
  int data[count] = {};
  for (int i = 0; i < count; i++) {
    int index = 0, score = 0;
    scanf("%d %d", &index, &score);
    data[index] += score;
  }

  int max_index = 1;
  int max_score = data[1];
  for (int i = 2; i < count; i++) {
    if (data[i] > max_score) {
      max_index = i;
      max_score = data[i];
    }
  }
  printf("\n");
  printf("%d %d\n", max_index, max_score);
}