#include <stdio.h>

int a(int n, int r, int c) {
    int num = (n + 1) * 2;
    if (r == 1) {
        return 3;
    }
    if (r - c == 1) {
        return num;
    }
    return a(num, r, c +1);  
}
int i = 1;
int main() {
    int n1;
    scanf("%d", &n1);
    // printf("Workd\n");  
    int result = a(3, n1, i);
    printf("%d", result);
    return 0;
}
