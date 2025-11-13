#include <stdio.h>
#include <string.h>

int main() {
  char strA[1000], strB[1000];
  int found = 0;

  printf("Nhập chuỗi A: ");
  fgets(strA, sizeof(strA), stdin);
  strA[strcspn(strA, "\n")] = '\0';

  printf("Nhập chuỗi B: ");
  fgets(strB, sizeof(strB), stdin);
  strB[strcspn(strB, "\n")] = '\0';

  int lenA = strlen(strA);
  int lenB = strlen(strB);

  for (int i = 0; i <= lenA - lenB; i++) {
    int j;
    for (j = 0; j < lenB; j++) {
      if (strA[i + j] != strB[j]) {
        break;
      }
    }
    if (j == lenB) {
      found = 1;
      break;
    }
  }

  if (found) {
    printf("Có\n");
  } else {
    printf("Không\n");
  }

  return 0;
}
