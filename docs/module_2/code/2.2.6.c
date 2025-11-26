//Enhance your coding skills, start writing your code here!!

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        if (!isalnum(str[i]) && str[i] != '\n') {  
            printf("Character: '%c' ASCII Value: %d\n", str[i], str[i]);
        }
    }

    return 0;
}
