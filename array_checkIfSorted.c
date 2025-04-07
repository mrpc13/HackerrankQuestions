#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void checkSort(int a[], int size) {
    int asc = 0;
    for(int i = 0; i < size - 1; i++) {
        if(a[i] > a[i + 1]) asc = 1;
    }
    if(asc == 0) 
        printf("Sorted");
    else
        printf("Not Sorted");
}
int main() {
    int size;
    scanf("%d", &size);
    int a[size];
    for(int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
    }
    checkSort(a, size);
    return 0;
}
