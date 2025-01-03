#include <unistd.h>
#include <stdio.h>

int N,R;
int i, i2, tmp;
long N2[1000][1000]; 

int main() {
    scanf("%d %d", &N,&R);
    i = 0;
    i2 = 0;
    while (N > i)
    {
        i2 = 0;
        while (R > i2)
        {
         scanf("%d",&N2[i][i2]);
        //  printf("N3[%d][%d] N2[%d] Sum[%d] \n",i2, N3[i2], N2[i][i2], N3[i2]+N2[i][i2]);
         N2[N][i2] += N2[i][i2];
         i2++;
        }
        i++;
    }
    i = 0;
    while (N >= i)
    {
        i2 = 0;
        tmp = 0;
        while (R >= i2)
        {
            if (i2 == 0) {
                tmp += N2[i][i2];
                printf("%d",N2[i][i2]);
            } else {
                if (i2 == R) {
                    printf(" %d",tmp);
                } else {
                    tmp += N2[i][i2];
                    printf(" %d",N2[i][i2]);
                }
            }
         i2++;
        }
        if (i < N) {
            printf("\n");
        }
        i++;
    }
    return (0);
}
