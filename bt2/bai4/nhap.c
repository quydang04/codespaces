#include <stdio.h>
void nhap(int a[100], int n) {
  printf("Bat dau nhap mang: \n");
  for(int i = 0; i < n; i++) {
  printf("a[%d] = ", i);
  scanf("%d", &a[i]);
}
}
