#include <stdio.h>

int main() {
    int size;
    scanf("%d",&size);
    int a[size],key;
    for(int i=0;i<size;i++)
       scanf("%d",&a[i]);
    
    scanf("%d",&key);
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]+a[j]==key){
                printf("%d %d",a[i],a[j]);
                return 0;
            }
                
        }
    }
    printf("-1");
return 0;
}
