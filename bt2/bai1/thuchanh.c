#include <stdio.h>
 int main() {
  int n;
  printf("Nhap n: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    printf("%3d ", i);
}
  printf("\n");
  return 0;
}
