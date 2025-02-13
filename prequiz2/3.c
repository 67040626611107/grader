#include <stdio.h>
int len;
int a[10];
int i =0;
int TotalOrder[10] = {0,0,0,0,0,0,0,0,0,0};
int p[9] = {0,35,36,36,35,40,45,37,32};
int price = 0;
int sum = 0;
char Order[9][20] = {"Nothing","Espresso","Americano","Latte","Cappuccino","Mocha","Macchiato","Flat White","Cold Brew"};
int Coffe(int a[10],int len) {
    i = 1;
    while (i <= len)
    {
        scanf("%d",&a[i]);
        i++;
    }
    i = 1;
    while (i <= len)
    {
        TotalOrder[a[i]]++;
        i++;
    }
    i = 1;
    while (i < 9) {
        price = TotalOrder[i] * p[i];
        sum += price;
        printf("%s(%d)\n",Order[i],price);
        i++;
    }
    printf("%d\n",sum);
    i = 0;
    while (i < 9) {
        if (TotalOrder[i] > 1) {
            printf("*%s(%d cups)",Order[i],TotalOrder[i]);
        }
        i++;
    }
    return (0);
}
int main () {
    scanf("%d",&len);
    Coffe(a,len);
    return (0);
}
