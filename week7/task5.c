#include <stdio.h>
#include <string.h>

int main() {
    char name[100] = "mega Office Supplies";
    char text[50] = " operates in ";
    char town[50] = "Windhoek";
    char sentence[200];

    strcpy(sentence, name);
    strcat(sentence, text);
    strcat(sentence, town);
    strcat(sentence, ".");

    printf("%s\n", sentence);
    return 0;
}