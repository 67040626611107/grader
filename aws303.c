#include <unistd.h>
#include <stdio.h>

int N,R,S;
int i, i2, tmp, tmp2, tmp3;
int N2[1000][1000]; 
int N3[1000][1000];

void a(int NA[1000][1000],int Row,int Colum) {
    printf("a)");
    Row--;
    i = 0;
    while (Colum > i)
    {
        printf(" %d",NA[Row][i]);
        i++;
    }
    printf("\n");
    return;
}


void b(int NA[1000][1000],int Row) { 
    i = 0;
    printf("b)");
    while (i < Row)
    {
        printf(" %d",NA[i][0]);
        i++;
    }
    printf("\n");
    return;
}


void c(int NA[1000][1000],int Row,int Colum) { 
    i = 0;
    printf("c)");
    while (Row > i)
    {
        i2 = 0;
        while (Colum > i2)
        {
            if (NA[i][i2] > NA[0][2] ) {
                printf(" %d",NA[i][i2]);
            }
            i2++;
        }
        i++;
    }
    printf("\n");
    return;
}


void d(int NA[1000][1000],int Row,int Colum) { 
    i = 0;
    printf("d)");
    while (Row > i)
    {
        i2 = 0;
        while (Colum > i2)
        {
            if (NA[i][i2] > NA[0][2] ) {
                printf(" %d,%d",i,i2);
            }
            i2++;
        }
        i++;
    }
    printf("\n");
    return;
}


void e(int NA[1000][1000],int Row,int Colum) { 
    i = 0;
    printf("e)\n");
    while (Row > i)
    {
        i2 = 0;
        NA[i][Colum] = NA[i][2]+NA[i][3];
        while (Colum >= i2)
        {
            if (i2 == 0) {
                printf("%d",NA[i][i2]);
            } else {
                printf(" %d",NA[i][i2]);
            }
            i2++;
        }
        i++;
        printf("\n");
    }
    return;
}


void f(int NA[1000][1000],int Row,int Colum) { 
    i = 0;
    printf("f)\n");
    while (Row > i)
    {
        tmp = NA[i][1];
        NA[i][1] = NA[i][Colum];
        NA[i][Colum] = tmp;
        i2 = 0;
        while (Colum >= i2)
        {
            if (i2 == 0) {
                printf("%d",NA[i][i2]);
            } else {
                printf(" %d",NA[i][i2]);
            }
            i2++;
        }
        i++;
        printf("\n");
    }
    return;
}


void g(int NA[1000][1000],int Row,int Colum) { 
    i = 0;
    printf("g)\n");
    i2 = 0;
    while (Colum >= i2)
    {
        tmp = NA[0][i2];
        NA[0][i2] = NA[Row-1][i2];
        NA[Row-1][i2] = tmp;
        i2++;
    }
    while (Row > i)
    {
        i2 = 0;
        while (Colum >= i2)
        {
            if (i2 == 0) {
                printf("%d",NA[i][i2]);
            } else {
                printf(" %d",NA[i][i2]);
            }
            i2++;
        }
        i++;
        printf("\n");
    }
    return;
}



void h(int NA[1000][1000],int Row,int Colum) { 
    i = 0;
    
    printf("h) new=[");
    while (Row > i)
    {
        i2 = 0;
        while (Colum >= i2)
        {
            if (NA[i][i2] % 2 == 0) {
                tmp = i;
                tmp2 = i2;
                tmp3 = NA[i][i2];
            }
           i2++;
        }
        i++;
    }
    i = 0;
    while (Row > i)
    {
        i2 = 0;
        while (Colum >= i2)
        {
            if (NA[i][i2] % 2 == 0) {
                printf("%d",NA[i][i2]);
                if (tmp == i && tmp2 == i2 && tmp3 == NA[i][i2]) {
                    // printf("Fuck");
                } else {
                    printf(" ");
                }
            }
           i2++;
        }
        i++;
    }
    printf("]\n");
    return;
}

void I(int NA[1000][1000],int Row,int Colum,int Num) { 
    i = 0;
    printf("i)\n");
    while (Row > i)
    {
        i2 = 0;
        while (Colum >= i2)
        {
            if (i2 == 0) {
                if (NA[i][i2] == Num) { 
                    printf("<%d>",NA[i][i2]);
                } else {
                    printf("%d",NA[i][i2]);
                }
            } else {
                if (NA[i][i2] == Num) { 
                    printf(" <%d>",NA[i][i2]);
                } else {
                    printf(" %d",NA[i][i2]);
                }
            }
            i2++;
        }
        i++;
        printf("\n");
    }
    return;
}
int main() {
    scanf("%d %d", &N,&R);
    i = 0;
    while (N > i)
    {
        i2 = 0;
        while (R > i2)
        {
         scanf("%d",&N2[i][i2]);
         i2++;
        }
        i++;
    }
    scanf("%d", &S);
    a(N2,N,R);
    b(N2,N);
    c(N2,N,R);
    d(N2,N,R);
    e(N2,N,R);
    f(N2,N,R);
    g(N2,N,R);
    h(N2,N,R);
    I(N2,N,R,S);
    // e(N2);
    // f(N2);
    // g(N2,N);
    // h(N2);
    return (0);
}
