#include <stdio.h>

void printA(int rows, int i);
void printY(int rows, int i);
void printU(int rows, int i);
void printS(int rows, int i);
void printH(int rows, int i);
void printI(int rows, int i);

int main() {
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    
    for (int i = 0; i < rows; i++) {
        printA(rows, i);
        printf("   ");
        printY(rows, i);
        printf("   ");
        printU(rows, i);
        printf("   ");
        printS(rows, i);
        printf("   ");
        printH(rows, i);
        printf("   ");
        printI(rows, i);
        printf("\n");
    }
    return 0;
}

void printA(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || j == rows - 1 || i == rows / 2 || (i == 0 && j > 0 && j < rows - 1))
            printf("* ");
        else
            printf("  ");
    }
}

void printY(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if ((i < rows / 2 && (j == i || j == rows - i - 1)) || (i >= rows / 2 && j == rows / 2))
            printf("* ");
        else
            printf("  ");
    }
}

void printU(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if ((j == 0 || j == rows - 1) || (i == rows - 1 && j > 0 && j < rows - 1))
            printf("* ");
        else
            printf("  ");
    }
}

void printS(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (i == 0 || i == rows - 1 || (i == rows / 2) || (i < rows / 2 && j == 0) || (i > rows / 2 && j == rows - 1))
            printf("* ");
        else
            printf("  ");
    }
}

void printH(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (j == 0 || j == rows - 1 || i == rows / 2)
            printf("* ");
        else
            printf("  ");
    }
}

void printI(int rows, int i) {
    for (int j = 0; j < rows; j++) {
        if (i == 0 || i == rows - 1 || j == rows / 2)
            printf("* ");
        else
            printf("  ");
    }
}
