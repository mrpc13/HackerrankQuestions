#include <stdio.h>
#include <math.h>

int is_kaprekar(int n) {
    int num = n * n;
    int count = 0, original = n;
    
    while (n > 0) {
        count++;
        n /= 10;
    }

    int right = count;
    int divisor = pow(10, right);
    int left = num / divisor;
    int right_part = num % divisor;

    if (left + right_part == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_kaprekar(n));
    return 0;
}
