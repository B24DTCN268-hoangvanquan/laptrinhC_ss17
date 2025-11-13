#include <stdio.h>
#include <string.h>

void is_palindrome(char str[]) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      printf("Chuỗi không phải là Palindrome\n");
      return;
    }
  }
  printf("Chuỗi là Palindrome\n");
}

int main() {
  char str[100];
  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  is_palindrome(str);

  return 0;
}