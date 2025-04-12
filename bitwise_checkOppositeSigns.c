#include <stdio.h>

int main() {
    int x,y;
    scanf("%d %d",&x,&y);
    if(((x>>31)&&1) ^ ((y>>31)&&1))
        printf("Yes");
    else
        printf("No");
        
     return 0;
}
