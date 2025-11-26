//Enhance your coding skills, start writing your code here!!
#include<stdio.h>

int main () {
  int a,b,c;
  scanf("%d %d %d", &a, &b, &c);
  
  int greatest;

  if (a > b) {
      if (a > c) {
          greatest = a;
      } else {
          greatest = c;
      }
  } else {
      if (b > c) {
          greatest = b;
      } else {
          greatest = c;
      }
  }

    printf("%d is the greatest of the given three numbers.", greatest);

  return 0;
}