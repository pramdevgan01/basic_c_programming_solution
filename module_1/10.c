#include <stdio.h>

int main() {
    int salary;
    float tax;
    scanf("%d", &salary);

    if (salary < 0) {
        printf("Error: Salary must be non-negative.\n");
    } 
    else if (salary < 500000) {
        printf("No tax\n");
    } 
    else {
        tax = salary * 0.10;
        printf("Tax to be paid:%.0f\n", tax);
    }

    return 0;
}
