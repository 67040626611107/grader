#include <unistd.h>
#include <stdio.h>

int N,N2;
int i,i2;
char L[1000];
char L2[1000][1000];
int N3[1000];




int main() {
    i = 0;
    while (i < 20)
    {
        scanf(" %c", &L[i]);
        i++;
    }
    scanf("%d", &N2);
    i = 0;
    while (i < N2)
    {
        i2 = 0;
        while (i2 < 20)
        {
            scanf(" %c", &L2[i][i2]);
            if (L[i2] == L2[i][i2]) {
                if (i2 > 17) {
                    N3[i]+=3;
                } else if (i2 > 14) {
                    N3[i]+=2;
                } else {
                    N3[i]++;
                }     
            }
            i2++;
        }
        i++;     
    }
    i = 0;
    while (i < N2)
    {
        printf("std %d => %d",i+1,N3[i]);
        if (i != N2-1) {
            printf("\n");
        }
        i++;
    }
    
    return (0);
}