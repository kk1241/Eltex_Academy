#include <stdio.h>

int set_byte(int number, unsigned char new_byte);

int main() {
  int original_number;
  char c;
  int new_byte;

  printf("Введите целое положительное число: ");
  scanf("%d%c", &original_number, &c);

  if (original_number > 0 && c == '\n') {

    printf("Введите значение третьего байта (0-255): ");

    scanf("%d", &new_byte);

    if (new_byte >= 0 && new_byte <= 255) {

      printf("Измененное число: %d", set_byte(original_number, new_byte));
    } else {
      printf("Некорректное значение для байта (0-255)");
    }
  } else {
    printf("Это не целое положительное число");

    return 1;
  }

  return 0;
}

int set_byte(int number, unsigned char new_byte) {
  number &= ~(0xFF << 16);

  number |= (new_byte << 16);

  return number;
}
