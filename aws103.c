#include <unistd.h>
#include <stdio.h>

int num,num2;
int main() {
    scanf("%d:%d",&num,&num2);
    if (num > 9 || num < 7) {
        printf("N");
        return (0);
    } 
    if ( num2  > 30 && (num == 9)) {
        printf("N");
        return (0);
    } 
     if ( num2  < 10 && (num == 7)) {
        printf("N");
        return (0);
    } 
    printf("Y");
    return (0);
}