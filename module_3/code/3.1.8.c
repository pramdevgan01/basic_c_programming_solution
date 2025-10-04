//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main(void) {
    int units;
    double bill = 0.0;

    scanf("%d", &units);

    if (units <= 40) {
        bill = units * 0.33;
    } else if (units <= 110) {
        bill = 40 * 0.33 + (units - 40) * 0.50;
    } else if (units <= 210) { 
        bill = 40 * 0.33 + 70 * 0.50 + (units - 110) * 0.70;
    } else {
        bill = 40 * 0.33 + 70 * 0.50 + 100 * 0.70 + (units - 210) * 1.50;
    }

    bill = bill + (bill * 0.20);

    printf("Rs. %.2f", bill);

    return 0;
}
