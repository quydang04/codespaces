#include <stdio.h>
int main() {
   int a, b;
   printf("Nhap hai so a va b: ");
   scanf("%d %d", &a, &b);
   printf("Tong cua 2 so %d va %d la: %d \n",a,b,cong(a,b));
   printf("Tich cua 2 so %d va %d la: %d\n",a,b,nhan(a, b));
   return 0;
}
