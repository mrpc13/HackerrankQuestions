#include <stdio.h>

int main() {
    int num,ibit;
    scanf("%d \n%d",&num,&ibit);
    printf("%d",num=num >> ibit & 1);
    return 0;
}
