#include <stdio.h>
#include <stdbool.h>

int main() {

    char s[] = "anagram";
    char t[] = "nagaram";

    int count[26] = {0};

    // Count characters in s
    for (int i = 0; s[i] != '\0'; i++) {
        count[s[i] - 'a']++;
    }

    // Subtract characters in t
    for (int i = 0; t[i] != '\0'; i++) {
        count[t[i] - 'a']--;
    }

    // Check if all counts are zero
    for (int i = 0; i < 26; i++) {

        if (count[i] != 0) {
            printf("Not an Anagram\n");
            return 0;
        }
    }

    printf("Valid Anagram\n");

    return 0;
}