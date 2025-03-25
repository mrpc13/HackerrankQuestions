#include <stdio.h>

int max(int a[], int size) {
    int max = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int min(int a[], int size) {
    int min = a[0];
    for (int i = 1; i < size; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

int main() {
    int size;
    scanf("%d", &size);
    int a[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    int maxnum = max(a, size);
    int minnum = min(a, size);
    printf("%d %d", maxnum, minnum);
    return 0;
}
