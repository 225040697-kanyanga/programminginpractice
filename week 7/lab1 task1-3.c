#include <stdio.h>
#include <string.h>
int main(void){
    //declaring variables
    
    char supplierName[100];
    char supplierEmail[100];
    char supplierNumber[20];
    char supplierTown[60];

///1. ask user for suplier name
printf("Enter the supplier name:");
fgets(supplierName, sizeof(supplierName), stdin);

//2.ask user for  suplier email
    printf("ENTER SUPPLIER EMAIL");
    fgets(supplierEmail, sizeof(supplierEmail), stdin);

//3.ask user for suplier phone number
printf("Enter supplier phone number");
fgets(supplierNumber, sizeof(supplierNumber), stdin);

//4.ask user for supplier town
printf("Enter supplierTown");
fgets(supplierTown, sizeof(supplierTown), stdin),
//5.display supplier information
printf("-----------------------\n");
   printf("SUPPLIER DETAILS\n");
printf("-------------------------\n");
printf();
//4. copy suppliers information
strcpy(supplierName, supplierEmail);


return 0;
}