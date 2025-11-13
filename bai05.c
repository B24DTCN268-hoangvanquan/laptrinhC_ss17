// Viết chương trình thực hiện các yêu cầu sau:

// Nhập vào chuỗi thứ nhất từ bàn phím.
// Nhập vào chuỗi thứ hai từ bàn phím.
// So sánh hai chuỗi:
// Nếu chúng giống nhau bất kể chữ hoa hay chữ thường, in ra: "Giống nhau".
// Nếu khác nhau, in ra: "Khác nhau".
#include <stdio.h>
#include <string.h>
int main () {
    char str1[100], str2[100];
    printf("Nhập chuỗi thứ nhất :");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Nhập chuỗi thứ hai :");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    if(strcasecmp(str1, str2) == 0) {
        printf("Giống nhau\n");
    } else {
        printf("Khác nhau\n");
    }
    
    return 0;
}