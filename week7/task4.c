#include <stdio.h>
#include <string.h>

int main() {
    char original[100] = "mega Office Supplies";
    char backup[100];

    strcpy(backup, original);

    printf("Original: %s\n", original);
    printf("Backup: %s\n", backup);
    return 0;
}