#include <stdio.h>
#include <string.h>

void split_string_into_words(char str[]) {
    int i, j, k;
    int n = strlen(str);

    for (i = 0; i < n; i++) {
        // Skip leading spaces
        while (str[i] == ' ') {
            i++;
        }

        // Find end of word
        j = i;
        while (j < n && str[j] != ' ') {
            j++;
        }

        // Print word
        for (k = i; k < j; k++) {
            printf("%c", str[k]);
        }
        printf("\n");

        // Update index to start of next word
        i = j;
    }
}

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";
    split_string_into_words(str);
    return 0;
}
