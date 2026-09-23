#include <stdio.h>

int main() {

    char s[] = "{[]}";

    char stack[100];
    int top = -1;

    int valid = 1;

    for (int i = 0; s[i] != '\0'; i++) {

        // Opening brackets
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {

            top++;
            stack[top] = s[i];
        }

        // Closing brackets
        else {

            // No opening bracket available
            if (top == -1) {
                valid = 0;
                break;
            }

            char open = stack[top];
            top--;

            if (s[i] == ')' && open != '(') {
                valid = 0;
                break;
            }

            if (s[i] == '}' && open != '{') {
                valid = 0;
                break;
            }

            if (s[i] == ']' && open != '[') {
                valid = 0;
                break;
            }
        }
    }

    // Stack should be empty at the end
    if (top != -1) {
        valid = 0;
    }

    if (valid)
        printf("Valid Parentheses\n");
    else
        printf("Invalid Parentheses\n");

    return 0;
}