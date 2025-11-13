
#include <stdio.h>
#include <string.h>
int main() {
  char str[100];
  char ch;
  int i, j = 0;
  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  printf("Nhập ký tự cần xoá :");
  scanf("%c", &ch);
  int len = strlen(str);
  for (i = 0; i < len; i++) {
    if (str[i] != ch) {
      str[j++] = str[i];
    }
  }
  str[j] = '\0';
  printf("Chuoi sau khi xoa ky tu '%c': %s\n", ch, str);
  return 0;
}
