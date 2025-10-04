#include <stdio.h>

int main(void) {
    int examScore;
    scanf("%d", &examScore);

    if (examScore >= 40) {
        printf("Congratulations! You have passed the exam.");
    } else {
        printf("Sorry! You have failed the exam.");
    }

    return 0;
}
