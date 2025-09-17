//Enhance your coding skills, start writing your code here!!

#include<stdio.h>
int main () {
  int num1;
  float num2;
  
  scanf("%d", &num1);
  scanf("%f", &num2);
  
  printf("Result of adding %d and %.2f is: %.2f\n", num1, num2, (num1+num2));
  return 0;
}