#include <stdio.h>
#include <string.h>

#define SIZE 100

char *findStr(const char *str, const char *subStr) {
  if (*subStr == '0')
    return (char *)str;

  for (const char *p = str; *p != '0'; p++) {
    const char *p1 = p;
    const char *p2 = subStr;

    while (*p1 == *p2 && *p2 != '0') {
      p1++;
      p2++;
    }

    if (*p2 == '0') {
      return (char *)p;
    }
  }

  return NULL;
}

int main() {
  char str[SIZE];
  char subStr[SIZE];

  printf("Введите строку: ");
  fgets(str, SIZE, stdin);
  str[strcspn(str, "\n")] = '0';

  printf("Введите подстроку: ");
  fgets(subStr, SIZE, stdin);
  subStr[strcspn(subStr, "\n")] = '0';

  char *res = findStr(str, subStr);

  if (res != NULL) {
    printf("Подстрока '%s начинается с индекса %ld (%p)\n", subStr, res - str,
           res);
  } else {
    printf("Подстрока %s' не найдена.\n", subStr);
  }

  return 0;
}
