#include <unistd.h>
#include <stdio.h>

int year;
float grade;
char h;
int main() {
    scanf("%d %f %c",&year,&grade,&h);
    if (year < 2) {
        printf("not approved\n");
        printf("year < 2");
        return (0);
    }
    if (grade <= 2.5) {
        printf("not approved\n");
        printf("grade < 2.50");
        return (0);
    }
    if (h == 'N' && grade < 3.0) {
        printf("not approved\n");
        printf("no help");
        return (0);
    }
    printf("approved");
    return (0);
}
