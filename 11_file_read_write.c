#include <stdio.h>
int main() {
    FILE *fptr;
    char str[100];

    fptr = fopen("example.txt", "w");
    if(fptr == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter text to write to file: ");
    gets(str);
    fprintf(fptr, "%s", str);
    fclose(fptr);

    fptr = fopen("example.txt", "r");
    if(fptr == NULL) {
        printf("Error reading file.\n");
        return 1;
    }

    printf("File contents: ");
    while(fgets(str, sizeof(str), fptr) != NULL)
        printf("%s", str);
    fclose(fptr);

    return 0;
}