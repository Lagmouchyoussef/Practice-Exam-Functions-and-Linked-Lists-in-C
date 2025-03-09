#include <stdio.h>
#include <stdlib.h>

int isSpace(char c) {
    if (c == ' ') {
        return 1;
    } else {
        return -1;
    }
}

void replaceSpaces(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        if (isSpace(str[i]) == 1) {
            str[i] = '.';
        }
        i++;
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    replaceSpaces(str);
    printf("Modified string: %s\n", str);
    return 0;
}