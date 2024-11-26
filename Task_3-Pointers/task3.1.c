#include <stdio.h>

int main() {
  int n;
  char c;
  int newByte = 0;

  scanf("%d%c", &n, &c);

  if (n > 0 && c == '\n') {
    scanf("%d", &newByte);
    if (newByte > 0 && newByte < 255) {
      unsigned char *byte = (unsigned char *)&n;
      byte[2] = (unsigned char)newByte;

      printf("Измененое число: %d", n);

    } else {
      printf("Значение должно быть от 0 до 255");
    }

  } else {
    printf("целое положительное число: %d", n);
  }
  return 0;
}
