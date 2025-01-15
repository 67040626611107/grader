#include <stdio.h>
#include <unistd.h>

char gender,marriage;
int age;
int main() {
    scanf("%c %c %d",&gender,&marriage,&age);
    if (marriage == 'M') {
        printf("approved");
        return (0);
    } 
    if (gender == 'M' && marriage == 'S' && age < 61 && age > 29) {
        printf("approved");
        return (0);
    }
    if (gender == 'W' && marriage == 'S' && age < 55 && age > 24) {
        printf("approved");
        return (0);
    }
    printf("not approved");
    return (0);
}