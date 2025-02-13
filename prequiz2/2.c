#include <stdio.h>

int r,c;
int i= 0;
int i2 =0;
int a[100][100],b[100][100];
int ArrayCon(int a[100][100],int b[100][100],int r,int c) {
    i =0;
    while (i < r) {
        i2 =0;
        while (i2 < c) {
            scanf("%d",&a[i][i2]);
            i2++;
        }
        i++;
    }
    i= 0;
    while (i < r) {
        i2 =0;
        while (i2 < c) {
            scanf("%d",&b[i][i2]);
            i2++;
        }
        i++;
    }
    return (0);
}
void printArray(int a[100][100],int b[100][100],int r,int c) {
    i= 0;
    while (i < r) {
        i2 =0;
        while (i2 < c) {
            if (a[i][i2] > b[i][i2]) {
                printf("%d,%d ",i,i2);
            }
            i2++;
        }
        i++;
    }
    return;
}
int main() {
    scanf("%d %d",&r,&c);
    ArrayCon(a,b,r,c);
    printArray(a,b,r,c);
    return (0);
}
