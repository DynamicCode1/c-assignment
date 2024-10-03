#include <stdio.h>
int main() {
  int n, i, no1;
  printf("Enter the Number for which you want to print table of:- ");
  scanf("%d", & no1);
  for (i = 1; i <= 10; i++) {
    printf("\n %d*%d=%d", no1, i, no1 * i);
  }
  return 0;
}
