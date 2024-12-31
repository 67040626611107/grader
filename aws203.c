#include <unistd.h>
#include <stdio.h> 



int H,M;
int i2,i;
void gen_square(int row,int col) {
    i = 0;
    while (i < row)
    {
        i2 = 0;
        while (i2 < col)
        {
           printf("* ");
           i2++;
        }
        i++;
        printf("\n");
    }
    printf("\n");
    return;
}

int main() {
    while ('0' == '0')
    {
        scanf("%d %d",&H,&M);
        if (H == 0 && M == 0) {
            gen_square(H,M);
            return (0);
        }
        if (1 <= H <= 30 && 1 <= M <= 30)
        {
        gen_square(H,M);
        }
    }
    return (0);
}
