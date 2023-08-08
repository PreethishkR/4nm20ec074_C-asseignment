#include <stdio.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    switch (ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
        default:
            return 0;
    }
}

// Function to remove vowels from the input string and store equal characters in another array
void removeVowelsAndStoreEqual(char str[], char equalChars[]) {
    int i, j, k;
    for (i = 0, j = 0, k = 0; str[i] != '\0'; i++) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        } else {
            if (i > 0 && str[i] == str[i - 1]) {
                equalChars[k++] = str[i];
            }
        }
    }
    str[j] = '\0';
    equalChars[k] = '\0';
}

int main() {
    char inputString[100];
    char equalCharacters[100];

    printf("Enter a string: ");
    scanf("%99[^\n]", inputString);//[^\n]: This part of the format specifier instructs scanf to read characters until a newline (\n) //character is encountered. The ^ symbol negates the character set, so it reads everything except newline characters.

    removeVowelsAndStoreEqual(inputString, equalCharacters);

    printf("String after removing vowels: %s\n", inputString);
    printf("Equal characters found: %s\n", equalCharacters);

    return 0;
}

