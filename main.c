#include <stdio.h>
#include <string.h>
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
    return 0;
}