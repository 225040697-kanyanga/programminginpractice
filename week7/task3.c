#include <stdio.h>
#include <string.h>

int main() {
    char s1[100] = "mega Office Supplies";
    char s2[100] = "Namibia Stationery";
    char search[100];

    printf("Enter supplier name to search: ");
    fgets(search, sizeof(search), stdin);
    search[strcspn(search, "\n")] = '\0';

    if (strcmp(search, s1) == 0 || strcmp(search, s2) == 0)
        printf("Supplier found.\n");
    else
        printf("Supplier not found.\n");
    return 0;
}