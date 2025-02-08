#include <stdio.h>
int len;
signed int i;
int check(int *A,int *B, int length) {
    i = 0;
    int sum;
    int sum2;
    while (i < length) {
        sum += A[i];
        sum2 += B[i];
        i++;
    }
    i = 0;
    i = sum - sum2;
    if (sum2 > sum) {
        i = sum2 - sum;
    }
    printf("%d",i);
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
