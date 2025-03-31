#include <stdio.h>
#include <limits.h>

int main() {
    int size;
    scanf("%d", &size);
    
    int values[size];
    double minDist[size];
    
    for (int i = 0; i < size; i++) {
        scanf("%d", &values[i]);
    }

    double closest = INT_MAX;
    for (int i = 0; i < size; i++) {
        if (values[i] == 1) {
            closest = 0.0;
        } 
        else if (values[i] == -1) {
            closest = INT_MAX; 
        } 
        else if (closest < INT_MAX) {
            closest += (values[i] == 2) ? 0.5 : 1.0;
        }
        minDist[i] = closest;
    }
     
    closest = INT_MAX;
    for (int i = size - 1; i >= 0; i--) {
        if (values[i] == 1) {
            closest = 0.0;
        } 
        else if (values[i] == -1) {
            closest = INT_MAX; 
        } 
        else if (closest < INT_MAX) {
            double updatedDist = closest + ((values[i] == 2) ? 0.5 : 1.0);
            
            if (updatedDist < minDist[i]) {
                minDist[i] = updatedDist;
            }
        }
        closest = minDist[i];
    }

    for (int i = 0; i < size; i++) {
        if (minDist[i] == INT_MAX) {
            minDist[i] = -1.0;
        }
        printf("%.1f ", minDist[i]);
    }

    return 0;
}
