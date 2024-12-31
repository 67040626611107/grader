#include <unistd.h>
#include <stdio.h> 

int d;
int main() {
    while ('0' == '0')
    {
        scanf("%d",&d);
        if (d == -1) {
            return (0);
        }
        printf("%d\n",100-d);
    }
    return (0);
}
