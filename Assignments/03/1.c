#include<stdio.h>
#include<stdlib.h>
void processMatrix(int size, int matrix[size][size]) {
    int i = 0, j;
    int resultSize = size / 2;
    int result[resultSize][resultSize];
  while(i < size) {
        j = 0;
        while(j < size) {
            int maxVal = matrix[i][j];
            if(matrix[i][j+1] > maxVal) maxVal = matrix[i][j+1];
            if(matrix[i+1][j] > maxVal) maxVal = matrix[i+1][j];
            if(matrix[i+1][j+1] > maxVal) maxVal = matrix[i+1][j+1];
            result[i/2][j/2] = maxVal;
            j += 2;
        }
        i += 2;
    }

    printf("The Resultant Matrix is: \n");
    i = 0;
    while(i < resultSize) {
        j = 0;
        while(j < resultSize) {
            printf("%d\t", result[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
}
int main(int argc, char *argv[]) {
    if(argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }
FILE *file = fopen(argv[1], "r");
    if(file == NULL) {
        printf("Could not open file %s\n", argv[1]);
        return 1;
    }

    int size;
    fscanf(file, "%d", &size);

    int matrix[size][size];
    int i = 0, j;
    while(i < size) {
        j = 0;
        while(j < size) {
            fscanf(file, "%d", &matrix[i][j]);
            j++;
        }
        i++;
    }
fclose(file);
 processMatrix(size, matrix);
 return 0;
}
