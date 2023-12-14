#include <stdio.h>
#include <stdlib.h>

void generateParenthesisUtil(char *current, int open, int close, int max) {
    if (open == max && close == max) {
        printf("%s\n", current);
        return;
    }
    if (open < max) {
        char newCurrent[2 * max + 1];
        snprintf(newCurrent, sizeof(newCurrent), "%s(", current);
        generateParenthesisUtil(newCurrent, open + 1, close, max);
    }
    if (close < open) {
        char newCurrent[2 * max + 1];
        snprintf(newCurrent, sizeof(newCurrent), "%s)", current);
        generateParenthesisUtil(newCurrent, open, close + 1, max);
    }
}

void generateParenthesis(int n) {
    if (n <= 0) {
        return;
    }
    char current[2 * n + 1] = "";
    generateParenthesisUtil(current, 0, 0, n);
}

int main() {
    int n;
    printf("Enter the number of pairs of brackets (n): ");
    scanf("%d", &n);

    if (n >= 0) {
        generateParenthesis(n);
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}

