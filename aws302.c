#include <unistd.h>
#include <stdio.h>

int N;
int i, i2, tmp;
int N2[1000]; 

void a(int *NA) {
    printf("a) %d %d %d %d\n",NA[0],NA[1],NA[2],NA[3]);
    return;
}
void b(int *NA) { 
    i = 0;
    printf("b)");
    while (NA[i] != '\0')
    {
        if (NA[i] > NA[2]) {
            printf(" %d",NA[i]);
        }
        i++;
    }
    printf("\n");
    return;
}
void c(int *NA) { 
    i = 0;
    printf("c)");
    while (NA[i] != '\0')
    {
        if (NA[i] > NA[2]) {
            printf(" %d",i);
        }
        i++;
    }
    printf("\n");
    return;
}
void d(int *NA,int s) { 
    i = 0;
    NA[s] = NA[2] + NA[3];
    printf("d)");
    while (NA[i] != '\0')
    {
        printf(" %d",NA[i]);
        i++;
    }
    printf("\n");
    return;
}
void e(int *NA) { 
    i = 0;
    NA[3] = NA[4] - NA[2];
    printf("e)");
    while (NA[i] != '\0')
    {
        printf(" %d",NA[i]);
        i++;
    }
    printf("\n");
    return;
}
void f(int *NA) { 
    printf("f)");
    i = (NA[1] > NA[5]) ? 2 : 6;
    printf(" %d", i);
    printf("\n");
    return;
}
void g(int *NA,int s) { 
    i = 0;
    tmp = NA[1];
    NA[1] = NA[s];
    NA[s] = tmp;
    printf("g)");
    while (NA[i] != '\0')
    {
        printf(" %d",NA[i]);
        i++;
    }
    printf("\n");
    return;
}
void h(int *NA) { 
    i = 0;
    i2 = 0;
    printf("h) new=[");
    while (NA[i] != '\0')
    {
        if (NA[i] % 2 == 0) {
            i2 = i;
        }
        i++;
    }
    i = 0;
    while (NA[i] != '\0')
    {
        if (NA[i] % 2 == 0) {
            printf("%d",NA[i]);
            if (i < i2) {
                printf(" ");
            }
        }
        i++;
    }
    printf("]");
    return;
}
int main() {
    scanf("%d", &N);
    i = 0;
    while (N > i)
    {
        scanf("%d",&N2[i]);
        i++;
    }
    a(N2);
    b(N2);
    c(N2);
    d(N2,N);
    e(N2);
    f(N2);
    g(N2,N);
    h(N2);
    return (0);
}
