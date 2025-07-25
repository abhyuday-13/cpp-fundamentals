/*Write a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/
#include<stdio.h>
int main()
{
    //Input
    int units;
    float totalBill,surcharge;
    printf("\nEnter the total number of units =>");
    scanf("%d",&units);
    //Calculation of bill
    if (units <= 50) 
    {
        totalBill = units * 0.50;
    } 
    else if (units <= 150) 
    {
        totalBill = (50 * 0.50) + ((units - 50) * 0.75); 
    } 
    else if (units <= 250) 
    {
        totalBill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20); 
    } 
    else 
    {
        totalBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }
        //Addition of Surcharge
        surcharge = totalBill*0.20;
        totalBill += surcharge;
    //Output
    printf("The total electricity bill is %.2f\n",totalBill);
    return 0;
}