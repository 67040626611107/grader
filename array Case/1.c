#include <stdio.h>
#include <unistd.h>

int i,o,a,s;
int p[] = {0,35,45,30,50,45,48,39,35};
char Menu[][44] = {
        "FjhgU",
        "Latte",
        "Espresso",
        "Iris",
        "Frappuccino",
        "Cappuccino",
        "Mocha",
        "Americano",
        "Black Eye"
};
int main() {
    scanf("%d",&i);
    int Order[i];
    o = 1;
    while (o <= i)
    {
       scanf("%d",&a);
       Order[o] = a;
       o++;
    }
    scanf("%d",&s);
    s = Order[s];
    printf("%s(%d)",Menu[s],p[s]);
    return (0); 
}