#include <unistd.h>
#include <stdio.h>

int n[4];
int i = 0;
int i2 = 0;
int tmp;
int main() {
    scanf("%d/%d/%d/%d",&n[0],&n[1],&n[2],&n[3]);
    while (i < 4) {
        i2 = 0;
        while (i2 < 3) {
            if (n[i2] > n[i2+1]) {
                tmp = n[i2];
                n[i2] = n[i2+1];
                n[i2+1] = tmp;
            }
            i2++;
        }
        i++;
    }
    printf("%d",n[3]);
    return (0);
}