#include <stdio.h>

int main() {
      int x;
    scanf("%d",&x);
    if(x==0){
        printf("No");
        return 0;
    }
    if(x & (x-1))
    {
        printf("No");
    }
    else
    {
        printf("Yes");
    }
        
    
      return 0;
}
