#include <stdio.h>
//vim
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
    return 1;
  }

  return 0;
}

void binary_number(int number) {
  int bits = Nof(number) * 8;

  for (int i = bits - 1; i >= 0; i--) {
    int bit = (number >> i) & 1;
    printf("%d", bit);
  }
  printf("\n");
}
