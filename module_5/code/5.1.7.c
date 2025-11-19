#include <stdio.h>

// User-defined function to count vowels
int countVowels(char str[]) {
    int i = 0, count = 0;

    while (str[i] != '\0') {
        char ch = str[i];

        // Convert uppercase to lowercase for easy checking
        if (ch >= 'A' && ch <= 'Z') {
            ch = ch + 32;
        }

        // Check for vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            count++;
        }

        i++;
    }

    return count;
}

int main() {
    char str[101];

    // Read full line including spaces
    fgets(str, sizeof(str), stdin);

    int result = countVowels(str);

    printf("Number of vowels: %d", result);

    return 0;
}
