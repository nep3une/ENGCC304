#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter word:\n");
    scanf("%s", str);

    int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Pass.\n");
    else
        printf("Not Pass.\n");

    return 0;
}
