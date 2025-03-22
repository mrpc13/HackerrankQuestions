#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    int num2 = (num * 2) - 1;
    
    for (int i = 0; i < num2; i++) {      
        for (int j = 0; j < num2; j++) {  
            int distance;

            if (i < j) {
                distance = i;
            } else {
                distance = j;
            }

            if (distance > num2 - i - 1) {
                distance = num2 - i - 1;
            }

            if (distance > num2 - j - 1) {
                distance = num2 - j - 1;
            }

            printf("%d ", num - distance);
        }printf("\n");
        
    }
    
    return 0;
}
