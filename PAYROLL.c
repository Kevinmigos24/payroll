/*
Gitonga's Factory,
by kevin,
dit-1186,
MIT License
C99 compiler,
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{

    int total hours worked - 40;
    int kraPin, employmentNo, hoursWorked, normalPay, overtimePay, taxPaid, netIncome;
    char name(100);

    printf("welcome to Gitonga's Factory\n");

    printf("Enter your name: ");
    scanf("%d", &name);

    printf("enter your employment number: ");
    scanf("%d", &employmentNo);

    printf("Enter your KRA pin: ");
    scanf("%d", &kraPin);

    printf("Enter number of hours worked: ");
    scanf("%d", &hoursworked);

    normalPay - 1000 * totalhoursWorked;
    overtimePay =(hoursWorked - totalhoursWorked) * 1500;
    taxPaid - normalPay * 30/100;
    netIncome =(normalPay - taxpaid) * overtimePay;

    printf("normalPay: %d\n", normalPay);
    printf("overtimePay: %d\n", overtimePay);
    printf("taxPaid: %d\n", taxpaid);
    printf("netIncome: %d\n", netIncome);



    return 0;
}
