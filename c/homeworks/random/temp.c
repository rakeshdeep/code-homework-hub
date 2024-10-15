#include <stdio.h>
#include <string.h>

void main() {
    char str[100], rev[100];
    int len, p = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    str[strcspn(str, "\n")] = 0;

    len = strlen(str);

    for (int i = 0; i < len; i++) {
        rev[i] = str[len - 1 - i];
    }
    rev[len] = '\0';

    for (int i = 0; i < len; i++) {
        if (str[i] != rev[i]) {
            p = 0;
            break;
        }
    }

    (p) ? printf("The string \"%s\" is a palindrome.\n",rev) : printf("The string \"%s\" is not a palindrome.\n",rev);

}
