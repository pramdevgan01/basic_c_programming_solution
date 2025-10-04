//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main(void) {
    int temp;
    scanf("%d", &temp);
    if (temp < 0) {
        printf("The temperature is Freezing.");
    } else {
        if (temp <= 20) {
            printf("The temperature is Cold.");
        } else {
            if (temp <= 35) {
                printf("The temperature is Normal.");
            } else {
                printf("The temperature is Hot.");
            }
        }
    }

    return 0;
}
