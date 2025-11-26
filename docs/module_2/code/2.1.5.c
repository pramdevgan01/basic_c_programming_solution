//Enhance your coding skills, start writing your code here!!

#include <stdio.h>

int counter = 0;


void incrementCounter() {
    counter++;
}

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        incrementCounter();
    }
    
    printf("Final counter: %d\n", counter);
    
    return 0;
}
