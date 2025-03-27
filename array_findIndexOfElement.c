#include <stdio.h>
int indexArr(int a[],int size,int target){
    for(int i=0;i<size;i++){
        if(target == a[i]){
            return i;
        }
    }
    return -1;
}
int main() {
int size,target;
    scanf("%d",&size);
    int a[size];
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&target);
    int value = indexArr(a,size,target);
    printf("%d",value);
     return 0;
}
