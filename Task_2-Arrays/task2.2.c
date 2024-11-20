#include <stdio.h>
#define N 5

int main() {

  int arr[N];
  printf("Ввод –> ");
  for (int i = 0; i < N; i++) {
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }
  printf("\n");
  printf("Вывод –> ");
  for (int i = N - 1; i >= 0; i--) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  return 0;
}
