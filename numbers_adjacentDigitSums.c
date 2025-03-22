#include <stdio.h>


int main() {
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num ;i++){
        int x,y;
        scanf("%d %d",&x,&y);
        if(x+1==y){
            printf("Yes \n");
            
        }
        else if(x-y+1>=0 && (x-y+1)%9==0){
            printf("Yes \n");
            
        }
        else
            printf("No \n");
    }
    
 return 0;
}
