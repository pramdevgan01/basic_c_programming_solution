#include<stdio.h>

int main () {
  
  int temp_c;
  scanf("%d", &temp_c);
  float temp_f = (1.8 * temp_c) + 32;
  printf("%.6f", temp_f);
  return 0;
}
