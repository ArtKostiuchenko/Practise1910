#include <stdio.h>
#include <stdio_ext.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *str = (char*) malloc (255 * sizeof(char));
    char *separator = ",";
    char *cmdstring;
  
    printf("Enter your commands with ',': ");
    fgets(str, 255, stdin);
    fflush(stdin);
    cmdstring = strtok(str, separator);
      
    while(cmdstring != NULL) {
        system(cmdstring);
        cmdstring = strtok(NULL, separator);
    }
  
  return 0;
}
