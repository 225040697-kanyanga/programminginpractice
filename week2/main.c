#include <stdio.h>

int main() {
    //// declare varibles
    double revenue=0;
    double expenses=0;
    double balance=0;
    int department=0;
    double payroll=0;
    double procurement;
    double assets;
/////display 
    printf(" BUDGET CALCULATOR\n");
/////prompt the user for  revenue
    printf("Enter total revenue: ");
    scanf("%lf", &revenue);

///////prompt user for expense
    printf("Enter total expenses: ");
    scanf("%lf", &expenses);


/////calculating balance
    balance = revenue - expenses;
///prompt for department
    printf("enter department");
    scanf('%d',&department);

    ////prompt for payroll
    printf("enter payroll");
    scanf("%lf",&payroll);

    /////prompt for procurement
    printf("enter procurement");
    scanf('%lf',&procurement);

    ///prompt for asset
    printf("enter asset");
    scanf('%lf',&assets);

    ///displaying reveenue and expenses
    printf("Revenue: %.2f\n", revenue);
    printf("Expenses: %.2f\n", expenses);

    if (balance > 0) {
        printf("Surplus: %.2f\n", balance);
    }
    else if (balance < 0) {
        printf("Deficit: %.2f\n", -balance);
    }
    else {
        printf("The budget is balanced.\n");
    }

    return 0;
}