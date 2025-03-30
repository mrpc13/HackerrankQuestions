#include <stdio.h>

int main() {
    int size;
    scanf("%d", &size);
    int a[size];
    int freq[size];

   
    for (int i = 0; i < size; i++) {
        scanf("%d", &a[i]);
        freq[i] = -1;  
    }

   
    for (int i = 0; i < size; i++) {
        if (freq[i] != 0) { 
            int count = 1;
            for (int j = i + 1; j < size; j++) {
                if (a[i] == a[j]) {
                    count++;
                    freq[j] = 0; 
                }
            }
            freq[i] = count;
        }
    } 
    
    int maxFreq = freq[0];
    int element = a[0];
    for (int i = 1; i < size; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            element = a[i];
        }
    }

    printf("%d\n", element);
    return 0;
}
