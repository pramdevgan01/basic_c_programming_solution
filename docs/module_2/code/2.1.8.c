//Enhance your coding skills, start writing your code here!!

#include <stdio.h>

#define SECONDS_IN_MINUTE 60

int main() {
    int minutes;
    scanf("%d", &minutes);

    int seconds = minutes * SECONDS_IN_MINUTE;

    printf("%d seconds\n", seconds);

    return 0;
}
