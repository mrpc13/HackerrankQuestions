#include <stdio.h>

int main() {
          int size;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++)
        scanf("%d",&a[i]);
    int target;
    scanf("%d",&target);
    int freq[size];
    for(int i=0;i<size;i++){
        if(target==a[i]){
                freq[target]++;
            }
        }
    printf("%d",freq[target]);
    
   return 0;
}
