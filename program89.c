//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char s[100];
    char c;
    int count = 0;
    int i = 0;
    scanf("%s", s);
    scanf(" %c", &c);
    while (s[i] != '\0') {
        if (s[i] == c) {
            count++;
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}
