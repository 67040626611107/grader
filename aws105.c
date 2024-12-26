#include <unistd.h>
#include <stdio.h>

int mid,quizz,final;
void grade_cal(int points) {
    if (points >= 80) {
        printf("A");
        return;
    } else if (points >= 70) {
        printf("B %d",80-points);
        return;
    } else if (points >= 60) {
        printf("C %d",80-points);
        return;
    } else if (points >= 50) {
        printf("D %d",80-points);
        return;
    }
    printf("F %d",80-points);
}
int main() {
    scanf("%d/%d/%d",&mid,&quizz,&final);
    int sum = mid+quizz+final;
    grade_cal(sum);
    return (0);
}