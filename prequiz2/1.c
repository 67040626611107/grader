#include <stdio.h>

int len;
int Max[100] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int i;
int SMAx = 0;
int a[100],b[100],c[100];
int ArrayA(int a[100],int b[100],int c[100],int len) {
    i = 0;
    while (i < len) {
        scanf("%d",&a[i]);
        if (a[i] > SMAx) {
            SMAx = a[i];
        }
        if (a[i] > Max[i]) {
            Max[i] = a[i];
        }
        i++;
    }
    i = 0;
    while (i < len) {
        scanf("%d",&b[i]);
        if (b[i] > SMAx) {
            SMAx = b[i];
        }
        if (b[i] > Max[i]) {
            Max[i] = b[i];
        }
        i++;
    }
    i = 0;
    while (i < len) {
        scanf("%d",&c[i]);
        if (c[i] > SMAx) {
            SMAx = c[i];
        }
        if (c[i] > Max[i]) {
            Max[i] = c[i];
        }
        i++;
    }
    return (1);
}
void printArray(int a[100],int len) {
    i =0;
    while (i < len) {
        printf("%d ",a[i]);
        i++;
    }
    printf("\n%d",SMAx);
    return;
}
int main() {
    scanf("%d",&len);
    ArrayA(a,b,c,len);
    printArray(Max,len);
    return (0);
}
