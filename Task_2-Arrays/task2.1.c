#include <stdio.h>

#define NMAX 150

int main() {
  int N;
  char c;

  printf("Введите размер квадратной матрицы (не больше %d): ", NMAX);
  scanf("%d%c", &N, &c);

  if (N < 1 || c != '\n' || N > NMAX) {
    printf("Размер матрицы должен быть в диапазоне от 1 до %d\n", NMAX);
    return 1;
  }

  int arr[NMAX][NMAX];

  int count = 1;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      arr[i][j] = count++;
    }
  }

  printf("Введенная матрица:\n");
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
