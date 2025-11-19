//Enhance your coding skills, start writing your code here!!

#include <stdio.h>

// User-defined function to check palindrome
int isPalindrome(int n) {
    int original = n;
    int reversed = 0;

    while (n > 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    return (reversed == original);
}

int main() {
    int n;
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("%d is a palindrome.", n);
    } else {
        printf("%d is not a palindrome.", n);
    }

    return 0;
}
