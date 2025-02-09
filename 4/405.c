#include <stdio.h>
int A[100];
int B[100];
int C[10][10];
int dimension,i,i2;
void inputArray(int *array,int N) { // ให้ทำอะไร Wa 
  i = 0;
  while (i < N) {
    scanf("%d",&array[i]);
    i++;
  }
}
void showArray2D(int  matrix[10][10],int N) {
    int i = 0;
    while (i < N) {
        i2 = 0;
        while (i2 < N)
        {
            printf("%d",matrix[i][i2]);
            if (i2  == N-1) {
                printf("\n");
            } else {
                printf(" ");
            }
            i2++;
        }
        i++;
    }
    return;
}
void constructMatrix(int  P[10][10],int N,int *A,int *B) {
    int i = 0;
    while (i < N) {
        i2 = 0;
        while (i2 < N)
        {
            P[i][i2] = A[i] * B[i2];
            i2++;
        }
        i++;
    }
    return;
}
int main() {
    scanf("%d",&dimension);
    inputArray(A,dimension);
    inputArray(B,dimension);
    constructMatrix(C,dimension,A,B);
    showArray2D(C,dimension);
    return (0);
}