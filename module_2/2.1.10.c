//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int globalCounter = 0;

int main() {
    int n;
    scanf("%d", &n);

    static int staticCounter = 0;

    for (int i = 1; i <= n; i++) {
        int autoCounter = 0;  
        globalCounter++;
        staticCounter++;
        autoCounter++;

        printf("Call %d\n", i);
        printf("Global: %d\n", globalCounter);
        printf("Static: %d\n", staticCounter);
        printf("Auto: %d\n\n", autoCounter);
    }

    return 0;
}
