#include <stdio.h>

int main() 
{
    int year;


    scanf("%d", &year);

    if (year > 0 && year < 100000) 
    {
        if( year % 100 == 0)
        {
            
          if (year % 400 == 0)
           {
            printf("Yes, %d is a leap year.\n", year);
           } 
           else 
           {
            printf("No, %d is not a leap year.\n", year);
           }
        }
        else if (year % 4 == 0)
        {
            printf("Yes, %d is a leap year.\n", year);
        } 
        else 
        {
            printf("No, %d is not a leap year.\n", year);
        }
    } 
    else 
    { 
       printf("The given year %d is Invalid year.\n", year); 
    }
    return 0;
}
