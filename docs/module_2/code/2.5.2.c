#include <stdio.h>

int main(void) {
  int x,y;
  scanf("%d %d", &x, &y);
  if ((x > 10) || (y > 10)) {
    printf("1\n");
  }
  else{
    printf("0\n");
  }
  return 0;
}