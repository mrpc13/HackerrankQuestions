#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int arr[N - 1];
    int total = N * (N + 1) / 2;
    int sum = 0;

    for (int i = 0; i < N - 1; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", total - sum);
    return 0;
}
