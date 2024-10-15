#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100], temp[100];
    int l, i, p = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // scanf("%s",str);

    //str[strcspn(str, "\n")] = 0;

    // Make a copy of the original string for comparison later
    strcpy(temp, str);

    // Find the l of the string
    l = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < l / 2; i++) {
        // Compare characters from the start and end
        if (tolower(str[i]) != tolower(str[l - i - 1])) {
            p = 0;
            break;
        }
    }

    // Output the result
    if (p) {
        printf("The string \"%s\" is a palindrome.\n", temp);
    } else {
        printf("The string \"%s\" is not a palindrome.\n", temp);
    }

    return 0;
}

