#include <stdio.h>

void binary_number(int);

int main() {
  int number = 0;
  char y;

  printf("Ведите целое положительное число: ");
  scanf("%d%c", &number, &y);

  if (number > 0 && y == '\n') {
    printf("Двоичное представление чиссла: ");
    binary_number(number);

  } else {
    printf("Это не целое положительное число");
  }

  return 0;
}

void binary_number(int number) {
  int bits = sizeof(number) * 8;

  for (int i = bits - 1; i >= 0; i--) {
    int bit = (number >> i) & 1;
    printf("%d", bit);
  }
  printf("\n");
}