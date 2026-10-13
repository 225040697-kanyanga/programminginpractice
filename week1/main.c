#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {

    ///////practical ex1
    char name[50]= "shikuambi";
    printf("welcome user.\n");

    printf("please enter your name.\n");
    scanf("%s",name);
    if(strcmp (name , "shikuambi\n") == 0){

      printf("welcome shikuambi.");
    }else {
        printf("bye");
    }
    
    ///////practical ex2
    
int main() {
    char input[50];
    float total = 0.0;

    while (1) {
        printf("Enter the airtime amount: ");
        scanf("%s", input);

        // Check if the user entered 'e' to stop
        if (strcmp(input, "e") == 0) {
            break;
        }

        // Convert the text input into a number and add to total
        total = total + atof(input);
        printf("Total balance available: %.2f\n", total);
    }

    return 0;
}

    return 0;
}