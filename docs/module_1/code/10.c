#include <stdio.h>

int main() {
    int salary;
    int tax;

    scanf("%d", &salary);

    if (salary < 500000) {
        printf("No tax\n");
    } else {
        tax = salary * 10 / 100;
        printf("Tax to be paid:%d\n", tax);
    }

    return 0;
}
