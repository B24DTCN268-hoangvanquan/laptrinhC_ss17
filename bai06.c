#include <stdio.h>
#include <string.h>

int main() {
  char str[1000];
  char longest[1000];
  int maxLen = 0;

  printf("Nhập chuỗi: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';

  int len = strlen(str);
  int start = 0;

  for (int i = 0; i <= len; i++) {
    if (str[i] == ' ' || str[i] == '\0') {
      int wordLen = i - start;
      if (wordLen > maxLen) {
        maxLen = wordLen;
        strncpy(longest, &str[start], wordLen);
        longest[wordLen] = '\0';
      }
      start = i + 1;
    }
  }

  printf("Từ dài nhất: \"%s\" (độ dài: %d)\n", longest, maxLen);
  return 0;
}
