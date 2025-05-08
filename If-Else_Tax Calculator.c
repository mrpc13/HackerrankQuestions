#include <stdio.h>

int main() {
    double income, tax;
    scanf("%lf", &income);

    if (income < 0 || income > 10000000) 
    {
        printf("INVALID\n");
        return 0;
    }
    if(income==0){
        tax=0;
    }
    if (income > 1000000)
    {
        tax += (income - 1000000) * 0.30;
        income = 1000000;
    }
    if (income > 500000)
    {
        tax += (income - 500000) * 0.20;
        income = 500000;
    }
    if (income > 250000)
    {
        tax += (income - 250000) * 0.05;
    }

    printf("%.2lf\n", tax);
    return 0;
}
