#include <stdio.h>

/**
 * Finds the kth smallest unique element in the array by iteratively finding the next minimum.
 * @param input: The input array.
 * @param size: The number of elements in the array.
 * @param kOrder: The order of the smallest unique element to find (1-indexed).
 * @return: The kth smallest unique element in the array.
 */

int existsInArray(int arr[], int len, int element) {
    for (int idx = 0; idx < len; idx++) {
        if (arr[idx] == element) {
            return 1;  
        }
    }
    return 0; 
}

int findKthSmallest(int input[], int size, int kOrder) {
    int distinct[100000];  
    int countDistinct = 0;

    for (int idx = 0; idx < size; idx++) {
        if (!existsInArray(distinct, countDistinct, input[idx])) {
            distinct[countDistinct++] = input[idx];  
        }
    }
    for (int i = 0; i < kOrder; i++) {
        int minIdx = i;
        for (int j = i + 1; j < countDistinct; j++) {
            if (distinct[j] < distinct[minIdx]) {
                minIdx = j;  
            }
        }
      
        int temp = distinct[i];
        distinct[i] = distinct[minIdx];
        distinct[minIdx] = temp;
    }

    return distinct[kOrder - 1];
}

int main() {
    int numElements, kPos;
    scanf("%d", &numElements); 

    int dataArray[numElements];
    for (int i = 0; i < numElements; i++) {
        scanf("%d", &dataArray[i]); 
    }

    scanf("%d", &kPos);  
    
    printf("%d\n", findKthSmallest(dataArray, numElements, kPos));  

    return 0;
}
