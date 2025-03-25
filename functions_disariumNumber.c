#include <stdio.h>
#include<math.h>

int is_disarium_number(int n) {
    int digit,last,sum=0,origi=n,count=0,m=n;
    while(n>0){
        n/=10;
        count++;
    }
    while(m>0){
        digit=m%10;
        sum=sum+ pow(digit,count--);
        m/=10;
    }
    if(origi!=sum){
        return 0;
    }
    else{
        return 1;
    }
    
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_disarium_number(n));
    return 0;
}
