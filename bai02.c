#include <stdio.h>
#include <string.h>

void toUpperCase(char str[]) {
  for (int i = 0; str[i]; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] - 32;
    }
  }
}

void toLowerCase(char str[]) {
  for (int i = 0; str[i]; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      str[i] = str[i] + 32;
    }
  }
}

int main() {
  char str[100];
  int choice;

  printf("Nhap chuoi: ");
  fgets(str, sizeof(str), stdin);
  str[strcspn(str, "\n")] = '\0';
  printf("Chon chuc nang:\n");
  printf("1. Chuyen thanh CHU HOA\n");
  printf("2. Chuyen thanh chu thuong\n");
  printf("Lua chon cua ban: ");
  scanf("%d", &choice);

  if (choice == 1) {
    toUpperCase(str);
    printf("Chuoi sau khi chuyen thanh CHU HOA: %s\n", str);
  } else if (choice == 2) {
    toLowerCase(str);
    printf("Chuoi sau khi chuyen thanh chu thuong: %s\n", str);
  } else {
    printf("Lua chon khong hop le.\n");
  }

  return 0;
}
