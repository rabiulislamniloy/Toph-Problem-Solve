#include <stdio.h>
#include <string.h>

int main() {
    char s[101];
    scanf("%s",s);

    int n=strlen(s);
    int isPalindrome=1;

    for (int i=0;i<n/2;i++) {
        if (s[i] != s[n-1-i]) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Yes");
    else
        printf("No");

    return 0;
}
