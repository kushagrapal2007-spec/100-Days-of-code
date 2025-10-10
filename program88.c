//Q88: Replace spaces with hyphens in a string.

/*
Sample Test Cases:
Input 1:
hello world
Output 1:
hello-world

*/
#include <stdio.h>

int main() {
    char s[100];
    int i = 0;
    scanf("%[^\n]", s);
    while (s[i] != '\0') {
        if (s[i] == ' ') {
            s[i] = '-';
        }
        i++;
    }
    printf("%s\n", s);
    return 0;
}
