#include <stdio.h>
int len;
int i;
void printmember(int *A,int length) {
    i = 0;
    while (i < length) {
        if (A[i] != -256) {
            // printf(" d : %d ",A[i]);
            // printf(" TEX : %d ",i+1);
            printf("%d ",i+1);
        }
        i++;
    }
    return;
}
int check(int *A,int *B, int length) {
    i = 0;
    int sum;
    int sum2;
    while (i < length) {
        // sum += A[i];
        // sum2 += B[i];
        if ( A[i] > B[i] ) {
            sum++;
        } else {
            A[i] = -256;
        }
        i++;
    }
    i = 0;
    // i = sum - sum2;
    // if (sum2 > sum) {
    //     i = sum2 - sum;
    // }
    printf("%d\n",sum);
    printmember(A,length);
    return i;
}

int main() {
    scanf("%d",&len);
    i = 0;
    int Ar[len],Ar2[len];
    while (i < len) {
        scanf("%d",&Ar[i]);
        i++;
    }
    i = 0;
    while (i < len) {
        scanf("%d",&Ar2[i]);
        i++;
    }
    check(Ar,Ar2,len);
    return 0;
}
