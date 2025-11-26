//Enhance your coding skills, start writing your code here!!
#include<stdio.h>
int main () {
  double dbfloat;
  
  scanf("%lf", &dbfloat);
  
  int intfloat = dbfloat;
  printf("Original double value: %.4f\n", dbfloat);
  printf("Casted int value: %d", intfloat);
  
  return 0;
}