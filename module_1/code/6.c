#include <stdio.h>
#include <string.h>

int main() {
    char building[101], street[101], city[101], state[101], pincode[101];

    // Input address details using fgets (to allow spaces)
    fgets(building, sizeof(building), stdin);
    fgets(street, sizeof(street), stdin);
    fgets(city, sizeof(city), stdin);
    fgets(state, sizeof(state), stdin);
    fgets(pincode, sizeof(pincode), stdin);

    // Remove trailing newlines left by fgets
    building[strcspn(building, "\n")] = '\0';
    street[strcspn(street, "\n")] = '\0';
    city[strcspn(city, "\n")] = '\0';
    state[strcspn(state, "\n")] = '\0';
    pincode[strcspn(pincode, "\n")] = '\0';

    // Output
    printf("Hello!\n");
    printf("%s\n", building);
    printf("%s\n", street);
    printf("%s\n", city);
    printf("%s\n", state);
    printf("%s\n", pincode);

    return 0;
}
