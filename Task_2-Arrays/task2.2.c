#include <stdio.h>
#define N 5

void swap(int *a, int *b) {
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

int main() {

  int arr[N];
  printf("Ввод –> ");
  for (int i = 0; i < N; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  printf("\n");
  printf("Вывод –> ");

  for (int j = 0; j < N / 2; j++) {
    swap(&arr[j], &arr[N - j - 1]);
  }

  for (int j = 0; j < N; j++) {
    printf("%d ", arr[j]);
  }

  printf("\n");

  return 0;
}
