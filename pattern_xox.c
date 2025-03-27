#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if(n<2){
        printf("Shape Not Possible");
        return 0;
    }
    
    if(n>=2){
    if(n%2==0){
        for(int i=1 ; i<=n+1 ;i++ ){
            for(int j=1 ; j<=n+1 ; j++){
                if(j==(n/2)+1 || i==(n/2) +1){
                    printf("x");
                }
                else 
                    printf("o");
                
                
            }printf("\n");
        }
    }
    else
        {
        for(int i=1 ; i<=n ;i++ ){
            for(int j=1 ; j<=n ; j++){
                if(j==(n/2)+1 || i==(n/2)+1){
                    printf("x");
                }
                else 
                    printf("o");
                
                
            }printf("\n");
        }
 return 0;
}
    }
}
