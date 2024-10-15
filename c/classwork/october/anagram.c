// 7.wap to check whether a two string are anagram or not.

#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100], temp;
    int len1, len2, a = 1;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = 0;

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = 0;

    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("The strings are not anagrams.\n");
        return;
    }

    //bubble sort
    for (int i = 0; i < len1 - 1; i++) {
        for (int j = i + 1; j < len1; j++) {
            if (str1[i] > str1[j]) {
                temp = str1[i];
                str1[i] = str1[j];
                str1[j] = temp;
            }
            if (str2[i] > str2[j]) {
                temp = str2[i];
                str2[i] = str2[j];
                str2[j] = temp;
            }
        }
    }

    for (int i = 0; i < len1; i++) {
        if (str1[i] != str2[i]) {
            a = 0;
            break;
        }
    }

     (a) ? printf("The strings are anagrams.\n") : printf("The strings are not anagrams.\n");
}
