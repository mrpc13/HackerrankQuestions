#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a ^ b;
    if(res==0)
    {
        printf("No");
        return 0;
    }
    if ((res & (res - 1)))
        printf("No\n");
    else
        printf("Yes\n");

    return 0;
}
