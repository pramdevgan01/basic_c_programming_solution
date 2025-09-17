#include<stdio.h>

int main () {
  int num;
  scanf("%d", &num);
  
  float dec;
  scanf("%f", &dec);
  
  char ch;
  scanf(" %c", &ch);
  
  double preDec;
  scanf("%lf", &preDec);
  
  
  printf("Integer value: %d\n", num);
  printf("Float value: %.2f\n", dec);
  printf("Character value: %c\n", ch);
  printf("Double value: %lf", preDec);

}