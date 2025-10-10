//Q87: Count spaces, digits, and special characters in a string.

/*
Sample Test Cases:
Input 1:
a b1&2
Output 1:
Spaces=1, Digits=2, Special=1

*/
#include <stdio.h>

int main() {
    char s[100];
    int spaces = 0;
    int digits = 0;
    int special = 0;
    int i = 0;
    scanf("%[^\n]", s);
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            spaces++;
        } else if (s[i] >= '0' && s[i] <= '9') {
            digits++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
        } else {
            special++;
        }
        i++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}
