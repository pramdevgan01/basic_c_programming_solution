//Enhance your coding skills, start writing your code here!!
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;

    printf("Sum: %d, ", sum);
    printf("Div by %d: %s, ", a, (sum % a == 0) ? "Yes" : "No");
    printf("Div by %d: %s\n", b, (sum % b == 0) ? "Yes" : "No");

    return 0;
}
