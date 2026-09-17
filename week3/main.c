#include <stdio.h>
int main(){
    ///declaring variables
    float basicSalary=0;
    float housingAllowance=0;
    float transportAllowance=0;
    float grossSalary=0;
     float tax=2500;
float netSalary=0;

    ///prompt
    printf("Enter  basic salary:\n");
    scanf("%f",&basicSalary);

    printf("Enter housing allowonce:\n");
    scanf("%f",&housingAllowance);

    printf("Enter transport allowance:\n");
    scanf("%f",&transportAllowance);

    printf("Enter tax:\n");
    scanf("%f",&tax);

    ////calculation
    grossSalary = basicSalary + housingAllowance + transportAllowance;
    netSalary = grossSalary - tax;

    ///display 
    printf("\nGross salary:%.2f\n", grossSalary);
    printf("Net salary:%2f\n", netSalary);



    return 0;
}