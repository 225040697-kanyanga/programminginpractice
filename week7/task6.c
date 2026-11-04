#include <stdio.h>
#include <string.h>

#define MAX 50

int main() {
    char suppliers[MAX][100];
    char temp[100];
    int count = 0, choice, i, found;

    do {
        printf("\n================================\n");
        printf("MUNICIPAL FINANCIAL MANAGEMENT\n");
        printf("================================\n");
        printf("1. Add Supplier\n");
        printf("2. Display Supplier\n");
        printf("3. Search Supplier\n");
        printf("4. Show Name Length\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                if (count >= MAX) {
                    printf("Supplier list full.\n");
                    break;
                }
                printf("Enter supplier name: ");
                fgets(temp, sizeof(temp), stdin);
                temp[strcspn(temp, "\n")] = '\0';
                strcpy(suppliers[count], temp);
                count++;
                printf("Supplier added.\n");
                break;

            case 2:
                if (count == 0)
                    printf("No suppliers.\n");
                for (i = 0; i < count; i++)
                    printf("%d. %s\n", i + 1, suppliers[i]);
                break;

            case 3:
                printf("Enter supplier name to search: ");
                fgets(temp, sizeof(temp), stdin);
                temp[strcspn(temp, "\n")] = '\0';
                found = 0;
                for (i = 0; i < count; i++) {
                    if (strcmp(temp, suppliers[i]) == 0) {
                        found = 1;
                        break;
                    }
                }
                printf(found ? "Supplier found.\n" : "Supplier not found.\n");
                break;

            case 4:
                if (count == 0)
                    printf("No suppliers.\n");
                for (i = 0; i < count; i++)
                    printf("%s - length: %zu\n", suppliers[i], strlen(suppliers[i]));
                break;

            case 5:
                printf("Goodbye.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 5);

    return 0;
}