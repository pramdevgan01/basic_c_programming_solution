/**********************************************/
/*                                            */
/*   Author        : Param Vishwakarma        */
/*   Problem Name  : Count Positive Feedback  */
/*                   Words in Comments        */
/*   Description   : Program to read a        */
/*                   customer feedback line   */
/*                   then count occurrences   */
/*                   of the words "good",     */
/*                   "excellent", and         */
/*                   "satisfied" manually     */
/*                   without using strcmp(),  */
/*                   strstr(), or strtok().   */
/*   Date          : October 2025             */
/*                                            */
/**********************************************/

#include <stdio.h>

int main() {
    char str[201];
    char word[50];
    int i = 0, j = 0;

    int good = 0, excellent = 0, satisfied = 0;

    // Step 1: Read the full sentence (including spaces)
    if (fgets(str, sizeof(str), stdin) == NULL) {
        // No input — print zeros
        printf("good: 0\nexcellent: 0\nsatisfied: 0\n");
        return 0;
    }

    // Step 2: Parse word by word
    while (str[i] != '\0') {

        // Collect characters until a space or newline or null
        if (str[i] != ' ' && str[i] != '\n') {
            word[j] = str[i];
            j++;
        } else {
            // End of a word — terminate it
            word[j] = '\0';

            // Compare manually with target words if non-empty
            if (j > 0) {

                // Check for "good"
                if (j == 4 &&
                    word[0]=='g' && word[1]=='o' && word[2]=='o' && word[3]=='d')
                    good++;

                // Check for "excellent"
                if (j == 9 &&
                    word[0]=='e' && word[1]=='x' && word[2]=='c' && word[3]=='e' &&
                    word[4]=='l' && word[5]=='l' && word[6]=='e' && word[7]=='n' &&
                    word[8]=='t')
                    excellent++;

                // Check for "satisfied"
                if (j == 9 &&
                    word[0]=='s' && word[1]=='a' && word[2]=='t' && word[3]=='i' &&
                    word[4]=='s' && word[5]=='f' && word[6]=='i' && word[7]=='e' &&
                    word[8]=='d')
                    satisfied++;
            }

            // Reset word index for next word
            j = 0;
        }

        i++;
    }

    // Final check: if the line ended without a trailing space/newline,
    // there may be a last word stored in word[] that hasn't been processed.
    if (j > 0) {
        word[j] = '\0';

        if (j == 4 &&
            word[0]=='g' && word[1]=='o' && word[2]=='o' && word[3]=='d')
            good++;

        if (j == 9 &&
            word[0]=='e' && word[1]=='x' && word[2]=='c' && word[3]=='e' &&
            word[4]=='l' && word[5]=='l' && word[6]=='e' && word[7]=='n' &&
            word[8]=='t')
            excellent++;

        if (j == 9 &&
            word[0]=='s' && word[1]=='a' && word[2]=='t' && word[3]=='i' &&
            word[4]=='s' && word[5]=='f' && word[6]=='i' && word[7]=='e' &&
            word[8]=='d')
            satisfied++;
    }

    // Step 3: Print results
    printf("good: %d\n", good);
    printf("excellent: %d\n", excellent);
    printf("satisfied: %d\n", satisfied);

    return 0;
}
