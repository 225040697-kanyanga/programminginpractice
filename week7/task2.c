#include <stdio.h>
#include <string.h>

int main() {
    char name[100] = "mega Office Supplies";
    char email[100] = "mega@supplies.com";
    char town[100] = "Windhoek";

    printf("Supplier name: %s\n", name);
    printf("Email: %s\n", email);
    printf("Town: %s\n", town);

    printf("Supplier name length: %zu\n", strlen(name));
    printf("Email length: %zu\n", strlen(email));
    printf("Town length: %zu\n", strlen(town));
    return 0;
}