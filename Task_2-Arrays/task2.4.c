#include <stdio.h>

#define N 5

void fillSpiral(int arr[N][N]) {
  int value = 1;
  int left = 0, right = N - 1;
  int top = 0, bottom = N - 1;

  while (value <= N * N) {

    for (int i = left; i <= right; i++) {
      arr[top][i] = value++;
    }
    top++;

    for (int i = top; i <= bottom; i++) {
      arr[i][right] = value++;
    }
    right--;

    if (top <= bottom) {
      for (int i = right; i >= left; i--) {
        arr[bottom][i] = value++;
      }
      bottom--;
    }

    if (left <= right) {
      for (int i = bottom; i >= top; i--) {
        arr[i][left] = value++;
      }
      left++;
    }
  }
}

void printArray(int arr[N][N]) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int arr[N][N];

  fillSpiral(arr);
  printArray(arr);

  return 0;
}
