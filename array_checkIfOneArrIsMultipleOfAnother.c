#include <stdio.h>

void sortArray(int A[], int size1) {
    for (int i = 0; i <= size1 - 2; i++) {
        for (int j = 0; j <= size1 - i - 2; j++) {
            if (A[j] > A[j + 1]) {
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
int main() {
    int size1;
    scanf("%d", &size1);
    int A[size1];
    int B[size1];
    for (int i = 0; i < size1; i++) {
        scanf("%d", &A[i]);
    }
    for (int i = 0; i < size1; i++) {
        scanf("%d", &B[i]);
    }

    sortArray(A, size1);
    sortArray(B, size1);

    for (int i = 0; i < size1; i++) {
        if (A[i] % B[i] != 0) {
            printf("False");
            return 0;
        }
    }

    printf("True");
}
