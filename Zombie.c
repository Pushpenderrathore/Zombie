#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("This program will attempt to delete the System32 folder.\n");
    printf("Are you sure you want to continue? (yes/no): ");
    
    char input[4];
    fgets(input, sizeof(input), stdin);
    
    if(strcmp(input, "yes\n") == 0) {
        system("rmdir /s C:\\Windows\\System32");
    } else {
        printf("Operation cancelled.\n");
    }
    
    return 0;
}
