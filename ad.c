#include<unistd.h>
#include<stdio.h>
#include <string.h>
char a[64];
char b[64];
int is_digit(int num) {
    if (num >= 48 && num <= 57 ) {
        return 1;
    }
    return 0;
}
int is_upper(int num) {
    if (num >= 65 && num <= 90 ) {
        return (1);
    }
    return 0;
}
int is_lower(int num) {
    if (num >= 97 && num <= 122 ) {
        return (1);
    }
    return 0;
}
int i,i2;
int upper_count;
int dupe = 0;
int num_count;
int pass_num = 0;
int pass_Alphabet = 0;
int checkLogin(char *login, char *passwd) {
        int len_passwd = strlen(passwd);
        i = 0;
        i2 = 0;
        while (i < len_passwd) {
            upper_count = is_upper(passwd[i]);
            pass_num += upper_count;
            pass_Alphabet += is_upper(passwd[i]);
            if (upper_count) {
                while (i2 < len_passwd) {
                    if (i2 != i) {
                        if (passwd[i] == passwd[i2]) {
                            dupe++;
                        }
                    }
                    i2++;
                }

            }
            i++;
        }
        // printf("%d\n",pass_num);
        // printf("%d\n",pass_digit);
        // printf("%d\n",is_digit(passwd[0]));

    if ( len_passwd >= 5 && len_passwd <= 8  &&  !is_digit(passwd[0]) && pass_num >= 2 && pass_Alphabet >= 2 && dupe == 0) {
         return 1;
    }
    else {
        return 0;
    }
}
int main() 
{
    printf("Enter Login :");
    scanf("%s",a);
    printf("\nEnter Password :");
    scanf("%s",b);
    if (checkLogin(a,b)) {
        printf("Welcome\n");
    } else {
        printf("Incorrect login or password\n");
    }
    return 0;
}
// U3U
