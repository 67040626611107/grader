#include <unistd.h>
#include <stdio.h>
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");
printf("This is not correct !!!!!!!!!!!!!!!!!!!!");

int N;
char L[1000];
char L2[1000] = "";
int i, i2, temp,ppl,am,i3;
int N2[1000]; 

int str_len(char *str) {
    i = 0;
    while (str[i] != '\0')
    {
       i++;
    }
    return i;
}
void str_cpy(char *s,char *d) {
    int l = str_len(s);
    i = 0;
    while (d[i] != '\0')
    {
        s[l+i] = d[i];
        i++;
    }
    return;
}
    
int check(char *letter,char *pass) {
    i = 0;
    i2 = 0;
    while (letter[i] != '\0')
    {
        if (letter[i] == pass[i]) {
            i2++;
        }
        i++;
    }
    return i2;
}

int main() {
    
    scanf("%d",&temp);
    am = 0;
    while (temp > am)
    {
        scanf("%s",&L);
        str_cpy(L2,L);
        am++;
    }

    scanf("%d",&ppl);
    am = 0;
    while (ppl > am) {
        i3 = 0;
        char L3[1000] = "";
        while (temp > i3)
        {
            scanf("%s",&L);
            str_cpy(L3,L);
            i3++;
        }
        N2[am] = check(L3,L2);
        am++;
    }
    am = 0;
    while (ppl > am)
    {
        printf("std %d => %d",am+1,N2[am]);
        if (am != ppl-1) {
            printf("\n");
        }
        am++;
    }
    
    return (0);
}
