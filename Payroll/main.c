/*
PAYROLL SYSSTEM
CREATED BY Ryan towett.
ON MARCH 2022
MIT LINCENSE
C99
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    // variable declaration
    char name[100],kra[201];
    int hours,overtime,gross,tax,net;
    printf("morris/ factory payroll\n");
    //capture input
    printf("enter name:");
    gets(name);
    printf("enter kra pin:");
    gets(kra);
    printf("hours worked:");
    scanf("%d",&hours);
    // computation
    if(hours> 40) {
        overtime=(hours-40) *1.5 * 1000;
        }
        else {
            overtime= 0;
            gross = hours * 1000;
        }

        tax =0.3 * gross;
        net =gross - tax;
        // output
        printf("employee name:%s\n",name);
        printf("gross income: %d\n",gross);
        printf("tax paid: %d\n",tax);
        printf("net income: %d\n",net);

    return 0;
}
