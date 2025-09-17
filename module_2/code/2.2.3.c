//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main() {
    float len_f;     
    double len_d;

    scanf("%f", &len_f);


    len_d = len_f;

    float area_f = len_f * len_f;
    double area_d = len_d * len_d;

    printf("%f cm\n", area_f);
    printf("%lf cm\n", area_d);

    return 0;
}
