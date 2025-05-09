#include <stdio.h>

int main() 
{
    int unit;
    double bill;
    
    scanf("%d",&unit);
    if(unit<0 || bill >1000000)
    {
        printf("Invalid Input!");
        return 0;
    }
   if(unit<=100 )
    {
            bill=unit*5;
    }
        else if (unit>100 && unit<=300 )
    {
            bill=500 + (unit-100)*7;
    }
        else
    {
           bill=500 + 1400 + (unit-300)*10;
    }
    if (bill <= 1200)
    {
        bill = bill*0.9;
    }
    printf("The electricity bill is: %.2f.\n", bill);
    return 0;
}
