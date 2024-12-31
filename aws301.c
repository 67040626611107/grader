#include <unistd.h>
#include <stdio.h>

int N;
int i, i2, temp;
int N2[1000]; 



int main() {
    scanf("%d", &N);
    i = 0;
    while (N > i)
    {
        scanf("%d",&N2[i]);
        i++;
    }
    while (N != 0)    
    {
        printf("%d",N2[N-1]);
        if (N != 1) {
            printf(" ");
        }
        N--;
    }
    
    return (0);
}
