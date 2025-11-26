//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    printf("Main value: %d\n", x);

    {
        int x = 100;  // shadows outer x
        printf("Function value: %d\n", x);
    }

    return 0;
}
