#include <unistd.h>
#include <stdio.h> 



int H,M;
int i2,i;
int N,N2;
void gen_square(int row,int col) {
    i = 0;
    while (i < row)
    {
        i2 = 0;
        while (i2 < col)
        {
            if (i == 0 || i == row-1 || i2 == 0 || i2 == col-1)
            {
                printf(". ");
            } else {
                printf("* ");
            }
           i2++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    return;
}

int main() {
    scanf("%d",&N);
    while (N2 < N)
    {
        scanf("%d",&M);
        if (1 <= N <= 100 && 1 <= M <= 30)
        {
            gen_square(M,M);
        }
        N2++;
    }
    return (0);
}
