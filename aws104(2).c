#include <unistd.h>
#include <stdio.h>

int n[4];
int i = 0;
int i2 = 0;
int tmp;
int main() {
    scanf("%d/%d/%d/%d",&n[0],&n[1],&n[2],&n[3]);
    if (n[0] > n[1] && n[0] > n[2] && n[0] >n[3]) {
        printf("%d",n[0]);
        return (0);
    }
    if (n[1] > n[0] && n[1] > n[2] && n[1] >n[3]) {
        printf("%d",n[1]);
        return (0);
    }
    if (n[2] > n[0] && n[2] > n[1] && n[2] >n[3]) {
        printf("%d",n[2]);
        return (0);
    }
    printf("%d",n[3]);
    return (0);
}