#include <stdio.h>
#include <string.h>

// int main() {
//     char passage[101];
//     char *dotPos;

//     // Input: read a line including spaces
//     fgets(passage, sizeof(passage), stdin);

//     // Find the first occurrence of '.'
//     dotPos = strchr(passage, '.');

//     if (dotPos != NULL) {
//         *dotPos = '\0';  // End first sentence here
//         // Print first sentence
//         printf("%s.\n", passage);
//         // Print second part (skip the space after '.')
//         printf("%s", dotPos + 2);  
//     } else {
//         // If no '.' found, just print the passage
//         printf("%s", passage);
//     }
//     return 0;
// }


int main () {
  char passage[101];
  fgets(passage, sizeof(passage), stdin);
  for(int i=0; passage[i] != '\0'; i++) {
    if (passage[i] == '.'){
      printf(".\n");
      printf("%s", &passage[i+2]);
      return 0;
    }
    else {
      printf("%c", passage[i]);
    }
  }
  return 0;
}