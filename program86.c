//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char s[100];
    int len = 0;
    int isPalindrome = 1;
    int i, j;
    scanf("%s", s);
    while (s[len] != '\0') {
        len++;
    }
    i = 0;
    j = len - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            isPalindrome = 0;
            break;
        }
        i++;
        j--;
    }
    if (isPalindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }
    return 0;
}
