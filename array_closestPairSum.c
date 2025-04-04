#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    scanf("%d", &size);
    int a[size], target;
    for (int i = 0; i < size; i++)
        scanf("%d", &a[i]);
    
    scanf("%d", &target);
    
    int closest_sum = INT_MAX;
    int first = 0, second = 0;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            int current_sum = a[i] + a[j];
            if (abs(current_sum - target) < abs(closest_sum - target)) {
                closest_sum = current_sum;
                first = a[i];
                second = a[j];
            }
        }
    }
    
    printf("%d %d", first, second);
    return 0;
}
