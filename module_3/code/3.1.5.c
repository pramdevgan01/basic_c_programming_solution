#include <stdio.h>

int main(){
  int a,b,c,d;
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  scanf("%d",&d);
  
  printf("Entered Values are\n");
  printf(" a=%d\n",a);
  printf(" b=%d\n",b);
  printf(" c=%d\n",c);
  printf(" d=%d\n\n",d);
  
  // Condition 1
  printf("Condition 1:\n");
  if(a > b){
    printf("a=%d is greater than b=%d\n\n",a,b);
  }else{
    printf("a=%d is not greater than b=%d\n\n",a,b);
  }
  
  // Condition 2
  printf("Condition 2:\n");
  if(c >= d){
    printf("c=%d is greater than or equal to d=%d\n\n",c,d);
  }else{
    printf("c=%d is less than d=%d\n\n",c,d);
  }
  
  // Condition 3
  printf("Condition 3:\n");
  if(a > b){
    printf("a=%d is greater than b=%d\n\n",a,b);
  }else{
    printf("a=%d is not greater than b=%d\n\n",a,b);
  }
  
  // Condition 4
  printf("Condition 4:\n");
  if(c <= d){
    printf("c=%d is less than or equal to d=%d\n\n",c,d);
  }else{
    printf("c=%d is greater than d=%d\n\n",c,d);
  }
  
  // Condition 5
  printf("Condition 5:\n");
  if(a != b){
    printf("a=%d and b=%d are not equal\n\n",a,b);
  }else{
    printf("a=%d and b=%d are equal\n\n",a,b);
  }
  
  // Condition 6
  printf("Condition 6:\n");
  if(c == d){
    printf("c=%d is equal to d=%d\n\n",c,d);
  }else{
    printf("c=%d is not equal to d=%d\n\n",c,d);
  }
  
  return 0;
}
