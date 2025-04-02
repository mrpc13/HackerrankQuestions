#include <stdio.h>
#include<math.h>
int main() {
int n;
scanf("%d",&n);
int majCount = ceil(n/2);
int arr[n];
for(int i=0 ; i<=n-1 ; i++){
  scanf("%d",&arr[i]);
}
int freq[2000001]={0};
for(int i=0 ; i<=n-1 ; i++){
    freq[arr[i]+1000000]++;
}
for(int i=0 ; i<=n-1;i++){
  if(freq[arr[i]+1000000]>majCount){
    printf("%d",arr[i]);
     return 0;
  }
}
printf("No Majority Element");
    return 0;
}
