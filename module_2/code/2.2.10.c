#include<stdio.h>

int main () {
  float fl;
  double db;
  long double ldb;
  
  scanf("%f", &fl);
  scanf("%lf", &db);
  scanf("%Lf", &ldb);
  
  printf("%.2f\n", fl);
  printf("%.15lf\n", db);
  printf("%.18Lf\n", ldb);
  
}