#include <stdio.h>

void removeDuplicates(int arr[], int *n) {
    int index = 0;
    for (int i = 0; i < *n; i++) {
        int dubli = 0;
        for (int j = 0; j < index; j++) {
            if (arr[i] == arr[j]) {
                dubli = 1;
                break;
            }
        }
        if (!dubli) 
            arr[index++] = arr[i];
    }
    *n = index;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    removeDuplicates(arr, &n);
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n%d\n", n);
    return 0;
}
