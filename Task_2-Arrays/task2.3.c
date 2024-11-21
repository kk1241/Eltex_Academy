#include <stdio.h>

#define N 3

int main() {

  int matrix[N][N];

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (j < N - i) {
        matrix[i][j] = 1;
      } else {
        matrix[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%d ", matrix[i][j]);
    }
    printf("\n");
  }

  return 0;
}
