#include <stdio.h>

int main() {

    int integerVar;
    float floatInput;
    scanf("%f", &floatInput);   
    integerVar = floatInput;   
    
    
    char charVar;
    int intInput;
    scanf("%d", &intInput);     
    charVar = intInput;   
    
    // Case 3: String to double (invalid, only illustrated)
    // double d = "123.45";
    
    
    printf("Value of integerVar: %d\n", integerVar);
    printf("Value of charVar: %c\n", charVar);
    
    return 0;
}
