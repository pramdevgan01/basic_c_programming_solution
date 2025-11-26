#include <stdio.h>

int main(void) {
    int year;
    scanf("%d", &year);

    ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        ? printf("%d is a Leap Year", year)
        : printf("%d is Not a Leap Year", year);

    return 0;
}
