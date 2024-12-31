#include <unistd.h>
#include <stdio.h>



void Number_to_text(char nums) {
    if (nums == '0') {
        printf("Zero ");
    } else if (nums == '1') {
        printf("One ");
    } else if (nums == '2') {
        printf("Two ");
    } else if (nums == '3') {
        printf("Three ");
    } else if (nums == '4') {
        printf("Four ");
    } else if (nums == '5') {
        printf("Five ");
    } else if (nums == '6') {
        printf("Six ");
    } else if (nums == '7') {
        printf("Seven ");
    } else if (nums == '8') {
        printf("Eight ");
    } else if (nums == '9') {
        printf("Nine ");
    }
    return;
}

int i;
char Chars[30];
int main() {
    scanf("%s",&Chars);
    i = 0;
    while (Chars[i] != '\0')
    {
        Number_to_text(Chars[i]);
        i++;
    }
    
    return (0);
}
