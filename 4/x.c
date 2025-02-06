// 2
// 2 7
// 9 5
#include <stdio.h>

int N;
int i;
int i2;
// 2
// 2 7
// 9 5
void printMatrix(int *Row, int *Colum,int Size) {
    int MaxArray = Size*Size;
    i = 1;
   while (i <= Size) {
        i2 = 1;
        while (i2 <= Size)
        {
            // printf("\n Digit %d",B[i2]);
            printf("%d",Row[i] * Colum[i2]);
            if (i2 != Size) {
                printf(" ");
            } else if (i *i2 != MaxArray) {
                printf("\n");
            }
            i2++;
        }
        i++;
    }
}
int main() 
{
    scanf("%d",&N);
    i = 1;
    int A[N];
    int B[N];
    while (i <= N) {
        scanf("%d",&A[i]);
        i++;
    }
    i = 1;
    while (i <= N) {
        scanf("%d",&B[i]);
        i++;
    }
    printMatrix(A,B,N);

}
