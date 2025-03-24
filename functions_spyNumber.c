#include <stdio.h>

int is_spy_number(int n) {
    int sum=0,pro=1,m=n;
    while(m>0){
        sum+=m%10;
        m/=10;
    }
    while(n>0){
        pro*=n%10;
        n/=10;
    }
    if(pro==sum){
        return 1;      
    }
    else{
        return 0 ; 
    }
}

int main() {
    int n;
    scanf("%d", &n); \
    printf("%d\n", is_spy_number(n));
    return 0;
}
