#include <stdio.h>

void number_one(int);

int main() {
  int number = 0;
  char y;

  printf("Ведите целое положительное число: ");
  scanf("%d%c", &number, &y);

  if (number > 0 && y == '\n') {
    printf("количество единиц в двоичном числе: ");
    number_one(number);

  } else {
    printf("Это не целое положительное число");
    return 1;
  }

  return 0;
}

void number_one(int number) {
  int binary_number = 0;
  int bits = Nof(number) * 8;

  for (int i = bits - 1; i >= 0; i--) {
    int bit = (number >> i) & 1;
    if (bit == 1) {
      binary_number++;
    }
  }
  printf("%d", binary_number);
  printf("\n");
}
