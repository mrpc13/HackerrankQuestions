#include <stdio.h>

int find_most_frequent_digit(int num) {
    int max_count = 0;
    int result_digit = 0;

    if (num == 0) {
        return 0;
    }

    for (int d = 0; d <= 9; d++) {
        int temp = num;
        int count = 0;

        while (temp > 0) {
            if (temp % 10 == d) {
                count++;
            }
            temp /= 10;
        }

        if (count > max_count || (count == max_count && d > result_digit)) {
            max_count = count;
            result_digit = d;
        }
    }

    return result_digit;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_most_frequent_digit(n));
    return 0;
}
