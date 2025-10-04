//Enhance your coding skills, start writing your code here!!
#include<stdio.h>

void main() {
  int x, y;
  scanf("%d", &x);
  scanf("%d", &y);
  
  printf("Entered values are\n");
  printf("n1 = %d\n", x);
  printf("n2 = %d\n", y);
  if(x > y) {
    printf("n1 is greater than n2");
  }
  else if (x < y) {
    printf("n1 is less than n2");
  }
  else if (x == y){
    printf("n1 is equal to n2");
  }
  else{
    return;
  }
}