#include <stdio.h>

int main() {
    int num, p1, p2;
    scanf("%d", &num);
    if(num==1){
        printf("2");
    }
    else if(num==2){
        printf("3");
    }
    else{

    int x = num - 1;
    while (x > 1) {
        int isPrime = 1;
        for (int i = 2; i * i <= x; i++) {
            if (x % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) break;
        x--;
    }
    p1 = x;

    int y = num + 1;
    while (1) {
        int isPrime = 1;
        for (int i = 2; i * i <= y; i++) {
            if (y % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) break;
        y++;
    }
    p2 = y;

    if (p1 < p2) {
        printf("%d", p2 - p1);
    } else {
        printf("%d", p1 - p2);
    }
    }

    return 0;
}
