#include <stdio.h>
#include <unistd.h>

int i,o;
float p,a;
int main() { 
    scanf("%d %d",&i,&o);
    int m = i*o;
    if (m < 10000) {
        printf("0.00");
        return (0);
    }
    p = ((float)m-10000) * 0.08;
    if (m < 20000) {
        printf("%.2f",p);
        return (0);

    }
    a = ((float)m-20000) * 0.1;
    p = (10000) * 0.08;

    printf("%.2f",p+a);
    return (0);
}