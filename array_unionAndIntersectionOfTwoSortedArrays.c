a#include <stdio.h>
void findUnionAndIntersection(int arr1[], int n1, int arr2[], int n2) {
    int i = 0, j = 0;
    int unionArr[n1 + n2];
    int intersectionArr[n1 < n2 ? n1 : n2];
    int unionIndex = 0, intersectionIndex = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j]) {
            unionArr[unionIndex++] = arr1[i++];
        } else if (arr1[i] > arr2[j]) {
            unionArr[unionIndex++] = arr2[j++];
        } else {
            unionArr[unionIndex++] = arr1[i++];
            intersectionArr[intersectionIndex++] = arr2[j++];
        }
    }

    while (i < n1) {
        unionArr[unionIndex++] = arr1[i++];
    }

    while (j < n2) {
        unionArr[unionIndex++] = arr2[j++];
    }

    for (int k = 0; k < unionIndex; k++) {
        if (k == 0 || unionArr[k] != unionArr[k - 1]) {
            printf("%d ", unionArr[k]);
        }
    }
    printf("\n");

    if (intersectionIndex == 0) {
        printf("Intersection Not Possible\n");
    } else {
        for (int k = 0; k < intersectionIndex; k++) {
            if (k == 0 || intersectionArr[k] != intersectionArr[k - 1]) {
                printf("%d ", intersectionArr[k]);
            }
        }
        printf("\n");
    }
}

int main() {
    int n1, n2;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    findUnionAndIntersection(arr1, n1, arr2, n2);
    return 0;
}
