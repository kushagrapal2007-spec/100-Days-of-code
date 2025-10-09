//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>

int main() {
    char s[100];
    int len = 0;
    int i, j;
    scanf("%s", s);
    while (s[len] != '\0') {
        len++;
    }
    i = 0;
    j = len - 1;
    while (i < j) {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    printf("%s\n", s);
    return 0;
}
