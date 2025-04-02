#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; 

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int freq[2000001]={0};
    for (int i=0;i<n;i++){
            freq[arr[i]+1000000]++;
    }
    for (int i=0;i<n;i++){
        if(freq[arr[i]+1000000]>=2){
            printf("%d",arr[i]);
            return 0;
        }
    }
    printf("No Repeating Element");
    return 0;
}
