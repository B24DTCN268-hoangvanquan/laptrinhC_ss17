
#include <ctype.h>
#include <stdio.h>
#include <string.h>
int main() {
  char password[100];
  int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;

  printf("Nhập mật khẩu: ");
  fgets(password, sizeof(password), stdin);
  password[strcspn(password, "\n")] = '\0';

  int len = strlen(password);
  if (len < 8) {
    printf("Không hợp lệ\n");
    return 0;
  }

  for (int i = 0; i < len; i++) {
    if (isupper(password[i])) {
      hasUpper = 1;
    } else if (islower(password[i])) {
      hasLower = 1;
    } else if (isdigit(password[i])) {
      hasDigit = 1;
    } else {
      hasSpecial = 1;
    }
  }

  if (hasUpper && hasLower && hasDigit && hasSpecial) {
    printf("Hợp lệ\n");
  } else {
    printf("Không hợp lệ\n");
  }

  return 0;
}