//Q83: Count vowels and consonants in a string.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
Vowels=2, Consonants=3

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    int v = 0, c = 0;
    int i = 0;
    scanf("%s", s);
    while (s[i] != '\0') {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            v++;
        } else if (ch >= 'a' && ch <= 'z') {
            c++;
        }
        i++;
    }
    printf("Vowels=%d, Consonants=%d\n", v, c);
    return 0;
}
