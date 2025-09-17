//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main() {
    int len, br;
    
    scanf("%d %d", &len, &br);
    
    int area = len * br;
    int perimeter = 2 * (len + br);
    
    printf("Area: %d, Perimeter: %d\n", area, perimeter);
    
    return 0;
}
