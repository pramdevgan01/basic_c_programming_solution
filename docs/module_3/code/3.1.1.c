//Enhance your coding skills, start writing your code here!!
#include<stdio.h>

int main () {
  int x,y;
  scanf("%d %d", &x, &y);
  
  if (x == y) {
    printf("It is a square");
  }
  else {
    printf("It is not a square, It forms a rectangle");
  }
  return 0;
}