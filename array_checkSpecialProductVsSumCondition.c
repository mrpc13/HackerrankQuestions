#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
      scanf("%d",&arr[i]);
    }
    for(int i=0 ; i<=n-2 ; i++){
        for(int j=0 ; j<=n-i-2 ;j++){
            if(arr[j]>arr[j+1]){
               int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    int smallest = arr[0];
    int secondSmallest = arr[1];
    int largest = arr[n-1];
    int secondLargest = arr[n-2];
    
if( (secondLargest * smallest) > (secondSmallest + largest) ){
    printf("True");
}
else{
    printf("False");
}
}
