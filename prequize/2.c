#include <stdio.h>
#include <unistd.h>

char gender,marriage;
int age,total;
int main() {
    scanf("%d",&total);
    int i = 0;
    while (i < total)
    {
        scanf(" %c%c %d",&gender,&marriage,&age);
        // printf("here : %c %c\n",gender,marriage);
        if (marriage == 'M') {
            printf("approved\n");
        } else if (gender == 'M' && marriage == 'S' && age < 61 && age > 29) {
            printf("approved\n");
        } else if (gender == 'W' && marriage == 'S' && age < 55 && age > 24) {
            printf("approved\n");
        } else {
            printf("not approved\n");
            if (gender == 'M' && age < 30 ) {
                printf("age < 30\n");
            }
            if (gender == 'M' && age > 60 ) {
                printf("age > 60\n");
            }
            if (gender == 'W' && age < 25 ) {
                printf("age < 25\n");
            }
            if (gender == 'W' && age > 55 ) {
                printf("age > 55\n");
            }
        }
            
        
        i++;
    }
    return (0);
}